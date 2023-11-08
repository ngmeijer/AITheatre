import os
import openai

api_key="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"
openai.api_key = api_key
last_question_asked = "empty"
last_image_prompt = "empty"

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