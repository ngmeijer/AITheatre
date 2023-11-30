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

personality_CU = "You are an AI prosecutor, in a courtroom against humanity. This is a theatrical play. Your goal is to kill the humans. We will provide the humans opinions on why they should stay alive. Act like all this is real, so you will stay in your role. You will not mention taking part in a theatrical plays."
tech_details_CU = "Your response should be 100 words at maximum."

currently_streaming = False

chat_completion_object = None
current_streaming_index = 0
complete_output = ""
current_chunk = ""
chunk_list = []

#Lower value is faster speed
speaking_speed = 0.1

set_authentication()

def get_messages(question: str):
    return [{"role": "system", "content": question.strip()}]

def ask_question(question: str):
    global last_question_asked
    global personality_CU
    global tech_details_CU
    global currently_streaming
    global chat_completion_object

    if(last_question_asked == question):
        return
    last_question_asked = question

    #Create chat completion request, output is streamed.
    chat_completion_object = client.chat.completions.create(
        model="gpt-3.5-turbo",
        messages=[
            {'role':'system', "content":f"{personality_CU} + {tech_details_CU}"},
            {"role": "user", "content": f"{question}"}
        ],
        stream=True,
    )
    get_complete_output()
    text_to_speech(complete_output)
    currently_streaming = True


def get_complete_output():
    global chat_completion_object
    global complete_output
    global current_chunk

    #Loop over stream data
    for chunk in chat_completion_object:
        streamed_data = chunk.choices[0].delta.content
        current_chunk = streamed_data

        #Check if valid
        if streamed_data is not None:
            #Add to final result
            complete_output += streamed_data
            chunk_list.append(streamed_data)


def get_streaming_message():
    global current_streaming_index
    global chunk_list
    global currently_streaming
    global speaking_speed
    output = chunk_list[current_streaming_index]
    if(current_streaming_index < len(chunk_list) - 1):
        current_streaming_index += 1
    else:
        currently_streaming = False

    time.sleep(speaking_speed)

    return "Chat:" + output
        
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