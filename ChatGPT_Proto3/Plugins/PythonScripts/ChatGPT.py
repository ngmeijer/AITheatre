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

personality_CI = ""
tech_details_CI = ""
image_details_CI = ""
#Your response should always be given in New Norwegian (also known as Nynorsk), even if the input is in English."
currently_streaming = False

chat_completion_object = None
current_streaming_index = 0
complete_output = ""
chunk_list = []

#Lower value is faster speed
text_speed = 0.32

enable_ai_voice = False

set_authentication()

def set_personality(personality_instructions : str):
    global personality_CI
    
    personality_CI = personality_instructions.replace("custom-instruction-personality", "")
    print("Personality: " + personality_CI)

def set_technical_instructions(technical_instructions : str):
    global tech_details_CI

    tech_details_CI = technical_instructions.replace("custom-instruction-technical", "")
    print("Tech: " + tech_details_CI)

def set_image_instructions(image_instruction : str):
    global image_details_CI

    image_details_CI = image_instruction.replace("custom-instruction-image", "")
    print("Image: " + image_details_CI)

def set_text_speed(input : str):
    global text_speed

    filteredText = input.replace("text-speed: ", "")
    text_speed = float(filteredText)

def set_ai_voice_state(input : str):
    global enable_ai_voice

    filteredText = input.replace("AI-voice:", "")
    print(f"AI voice enabled?:{filteredText}")
    if(filteredText == "Checked"):
        enable_ai_voice = True
    elif (filteredText == "Unchecked"):
        enable_ai_voice = False

def ask_question(question: str):
    global last_question_asked
    global personality_CI
    global tech_details_CI
    global currently_streaming
    global chat_completion_object
    global enable_ai_voice

    if(last_question_asked == question):
        return
    last_question_asked = question

    #Create chat completion request, output is streamed.
    chat_completion_object = client.chat.completions.create(
        model="gpt-4",
        messages=[
            {'role':'system', "content":f"{personality_CI} + {tech_details_CI}"},
            {"role": "user", "content": f"{question}"}
        ],
        stream=True,
    )

    get_complete_output()
    
    print(f"State of AI voice:{enable_ai_voice}")
    if(enable_ai_voice):
        print("enabled AI voice.")
        text_to_speech(complete_output)
    currently_streaming = True


def get_complete_output():
    global chat_completion_object
    global complete_output
    global chunk_list
    global current_streaming_index

    complete_output = ""
    chunk_list = []
    current_streaming_index = 0

    for chunk in chat_completion_object:
        streamed_data = chunk.choices[0].delta.content

        #Check if valid
        if streamed_data is not None:
            #Add to final result
            complete_output += streamed_data
            chunk_list.append(streamed_data)

def get_streaming_message():
    global current_streaming_index
    global chunk_list
    global currently_streaming
    global text_speed

    output = chunk_list[current_streaming_index]
    # print(f"output: {output}")
    if(current_streaming_index < (len(chunk_list) - 1)):
        current_streaming_index += 1
    else:
        currently_streaming = False

    time.sleep(text_speed)

    if currently_streaming == False:
        return "Chat: stream has ended"
    
    if current_streaming_index == len(chunk_list) - 1:
        return "Chat:" + output + "\n"
    
    return "Chat:" + output
        
def create_image(prompt : str):
    global last_image_prompt
    global image_details_CI
    if(last_image_prompt == prompt):
        return
    
    last_image_prompt = prompt

    print(prompt + image_details_CI)
    image_response = client.images.generate(
        model="dall-e-3",
        prompt=f"{prompt + image_details_CI}",
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