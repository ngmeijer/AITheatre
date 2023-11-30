# Python 3.9
# Made by: Fortbonnitar
# This works as a bridge between Unreal Engine and Python by allowing the exchanging of data through a local TCP socket connection.


# # # # # # # # # # # # # # # # # ## # # # # # # # # # # # # # # # # ################                                 ##############        ########################
# XXX XXX XXX XXX XXX XXX XXX XXX ## XXX XXX XXX XXX XXX XXX XXX XXX ################         ############            ################      ########################
# XXX XXX# # # # # # # # #XXX XXX ## XXX XXX# # # # # # # # #XXX XXX ###                    ####        ####          ###           ###                ### 
# XXX #         ###         # XXX ## XXX #         ###         # XXX ###                  ###              ###        ###            ###               ### 
# XXX #       ### ###       # XXX ## XXX #       ### ###       # XXX ###                ###                  ###      ###            ###               ### 
# XXX #      ###   ###      # XXX ## XXX #      ###   ###      # XXX ############      ###                    ###     ###           ###                ### 
# XXX #     ###  X  ###     # XXX ## XXX #     ###  X  ###     # XXX ############      ###                    ###     ###         ###                  ### 
# XXX #      ###   ###      # XXX ## XXX #      ###   ###      # XXX ###               ###                    ###     #############                    ### 
# XXX #       ### ###       # XXX ## XXX #       ### ###       # XXX ###                ###                  ###      ###         ###                  ### 
# XXX #         ###         # XXX ## XXX #         ###         # XXX ###                 ###                ###       ###           ###                ### 
# XXX XXX# # # # # # # # #XXX XXX ## XXX XXX# # # # # # # # #XXX XXX ###                  ###              ###        ###             ###              ### 
# XXX XXX XXX XXX XXX XXX XXX XXX ## XXX XXX XXX XXX XXX XXX XXX XXX ###                   ###            ###         ###              ###             ### 
# # # # # # # # # # # # # # # # # ## # # # # # # # # # # # # # # # # ###                     ##############           ###               ###            ###                                
                  #################################
                  #  |_|_|_|_|_|_|_|_|_|_|_|_|_|  #                  #####################################################################################################
                  #  | | | | | | | | | | | | | |  #
                  #################################



print("""

Developed by Fortbonnitar

####   #    # #   # # # # # 
#     # #   #  #      #
##   #   #  ###       #
#     # #   #  #      #
#      #    #   #     #
# # # # # # # # # # # # # # 
""")

import socket
import ChatGPT
import time

debug = False

##########################################################################################
# Set this script as a TCP-Server and create the socket and listen for Unreal connection 
###########################################################################################

class TCP:
    def __init__(self, ip_adress: str='127.0.0.1', port: int=8000):
        self.last_question = "empty"
        self.last_response = "empty"
        self.can_ask_question = True
        self.running = True
        self.ip_adress = ip_adress
        self.port = port
        self.debug = True

        # Create a TCP socket
        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)


        # Bind the server socket to a specific IP address and port
        self.server_address = (self.ip_adress, self.port)
        self.server_socket.bind(self.server_address)

    def listen(self):
        # Listen for incoming connections
        self.server_socket.listen(1)
        print("Server started. Waiting for connections...")

        # Accept a client connection
        self.client_socket, self.client_address = self.server_socket.accept()
        print(f"Client connected: {self.client_address}")

        ##############################################################################
        # After Connection established successfully, if data recieved set as variable
        ###############################################################################

    def get_incoming(self):
        # Main Loop
        while self.running:
            try:
                data = self.client_socket.recv(4096)
                
                # Data is firstly decoded from bytes to a string
                self.in_data = data.decode()

                if(self.debug != True):
                    continue        

                #determine input type based on button clicked?
                input_type = self.define_input_type()

                #call the correct OpenAI API based on the input type
                self.determine_data_action(input_type)
            
            except Exception as e:
                print(e)

    def send_data(self, data_string, encoding='utf-8'):
            # Converting the sending data from string to bytes 
            reply_data = bytes(data_string, encoding)

            # Sending back to Unreal Engine
            send = self.client_socket.send(reply_data)

    def define_input_type(self):
        if(self.in_data.__contains__("Prompt is to generate an image")):
                return "image"
        if(self.in_data.__contains__("Voice input was given")):
                return "voice"
        return "chat"
    
    def determine_data_action(self, input_type : str):
         match input_type:
                case "chat":
                    ### Kick off the initial question request
                    ChatGPT.ask_question(self.in_data)

                    while(ChatGPT.currently_streaming):
                        streaming_message = ChatGPT.get_streaming_message()
                        self.send_data(f'{streaming_message}')
                case "image":
                    self.in_data.replace("Prompt is to generate an image", '')
                    response = ChatGPT.create_image(self.in_data)    
                    self.send_data(f'{response}')
                case "voice":
                    response = ChatGPT.transcribe_audio()
                    self.send_data(f'{response}')
                case _:
                    print("Invalid argument for switch case")
            
server = TCP()
server.listen()
server.get_incoming()