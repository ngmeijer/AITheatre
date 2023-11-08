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
                input_type = "chat"
                if(self.in_data.__contains__("Prompt is to generate an image")):
                    input_type = "image"

                match input_type:
                    case "chat":
                        print("chat was requested")
                        response = ChatGPT.ask_question(self.in_data)
                    case "image":
                        print("image was requested")
                        self.in_data.replace("Prompt is to generate an image", '')
                        response = ChatGPT.create_image(self.in_data)                
                    case _:
                        print("Invalid argument for switch case")
                
                self.send_data(f'{response}')
            
            except Exception as e:
                print(e)

    def send_data(self, data_string, encoding='utf-8'):
            # Converting the sending data from string to bytes 
            reply_data = bytes(data_string, encoding)
            print(reply_data)

            # Sending back to Unreal Engine
            send = self.client_socket.send(reply_data)
            
server = TCP()
server.listen()
server.get_incoming()