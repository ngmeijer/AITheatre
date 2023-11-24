import os
import io
from openai import OpenAI
import time

def set_authentication():
    #Handles getting the authentication file and retrieves the API key inside.
    api_key = "empty"
    api_file = open(f"auth.txt", "r")
    api_key = api_file.read()

    if (api_key == "empty"):
        print("API key file could not be found. Make sure a file 'auth.txt' with a key exists.")
        return
    return api_key

client = OpenAI(api_key=set_authentication())

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

    completion = client.chat.completions.create(
        model="gpt-3.5-turbo",
        messages=[
         {"role": "user", "content": f"{question}"}
      ]
    )

    text_to_speech(completion.choices[0].message.content.strip())
    response ="Chat:"+completion.choices[0].message.content.strip()
    return response

def create_image(prompt : str):
    global last_image_prompt
    if(last_image_prompt == prompt):
        return
    
    last_image_prompt = prompt

    image_response = client.images.generate(
        model="dall-e-3",
        prompt=f"{prompt}",
        size="1024x1024",
        quality="standard",
        n=1,
    )

    response="Image:"+image_response.data[0].url
    return response

def transcribe_audio():
    file_path = "../../Content/STT/VoiceInput.wav"
    while not os.path.exists(file_path):
        time.sleep(0.1)

    if os.path.isfile(file_path):
        audio_file = open(file_path, "rb")
        print(audio_file)
        transcript = client.audio.transcriptions.create(
           model="whisper-1",
           file=audio_file,
           response_format="text"
        )

    audio_file.close()

    response="transcript:"+transcript.strip()
    return response

def text_to_speech(prompt : str):
    ttsResult = client.audio.speech.create(
        model="tts-1",
        voice="alloy",
        input=prompt
    )

    ttsResult.stream_to_file("../../Content/TTS/output.mp3")   

    return ttsResult