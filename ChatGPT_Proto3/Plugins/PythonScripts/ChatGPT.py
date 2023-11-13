import os
import openai

def set_authentication():
    #Handles getting the authentication file and retrieves the API key inside.
    api_key = "empty"
    api_file = open(f"auth.txt", "r")
    api_key = api_file.read()

    if (api_key == "empty"):
        print("API key file could not be found. Make sure a file 'auth.txt' with a key exists.")
        return
    openai.api_key = api_key
    return

last_question_asked = "empty"
last_image_prompt = "empty"

set_authentication()

def get_messages(question: str):
    return [{"role": "system", "content": question.strip()}]

def ask_question(question: str):
    global last_question_asked
    if(last_question_asked == question):
        return

    last_question_asked = question

    completion = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",
        messages=[
         {"role": "user", "content": f"{question}"}
      ]
    )

    return completion.choices[0].message.content.strip()

def create_image(prompt : str):
    global last_image_prompt
    if(last_image_prompt == prompt):
        return
    
    last_image_prompt = prompt

    image_response = openai.Image.create(
        model="dall-e-3",
        prompt=f"{prompt}",
        size="1024x1024",
        quality="standard",
        n=1,
    )

    return image_response.data[0].url

def transcribe_audio():
    print("transcribing audio nowwwww")
    audio_file = open("../../Saved/BouncedWavFiles/Test.wav", "rb")
    transcript = openai.Audio.transcribe(
        "whisper-1",
        audio_file,
        response_format="text"
    )

    return transcript.strip()