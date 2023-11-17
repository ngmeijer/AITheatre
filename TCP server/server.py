import os
import socket
import logging

raised_hands = 0

log_file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'server.log')
logging.basicConfig(filename=log_file_path, level=logging.DEBUG, format='%(asctime)s - %(levelname)s: %(message)s')

def run_server():
    global raised_hands
    try:
        server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_ip = "192.168.178.31"
        port = 8000
        server.bind((server_ip, port))
        server.listen(1)

        print(f"Listening on {server_ip}:{port}")

        client_socket, client_address = server.accept()
        print(f"Accepted connection from {client_address[0]}:{client_address[1]}")

        while True:
            data_received = client_socket.recv(1024)
            data_received = data_received.decode("utf-8")
            data_received = data_received.strip()

            print(f"Data received: {data_received}")

            if data_received == "Raise hand":
                raised_hands += 1
            if data_received == "Lower hand":
                raised_hands -= 1

            if data_received.lower() == "close":
                client_socket.send("closed".encode("utf-8"))
                break

            print(f"Received: {data_received} Currently raised hands: {raised_hands}")
        
        response = "accepted".encode("utf-8")
        client_socket.send(response)

    except Exception as e:
        print(f"Error: {e}")
        logging.error(f"Error: {e}")
        logging.exception("Exception occurred")

    finally:
        client_socket.close()
        server.close()
        print("Closed server")

run_server()