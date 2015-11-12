import socket
import sys

s = socket.socket()

host = '127.0.0.1'
port = 50007

try:
    s.bind((host, port))
except (s.error , msg):
    print ('Bind failed. Error Code : ' + str(msg[0]) + ' Message ' + msg[1])
    sys.exit()
    
print ('Socket bind complete')
s.listen(1)

# the s.accept() command returns two variables that we save. client is
# the client socket which we can use to send and receive data. the
# address is the address bound to the client socket
# client, addr = s.accept()

while True:


   # we overwrite the msg variable with a message from the client. the
   # message is decoded and printed on the server
   client, addr = s.accept()
   msg = client.recv(1024).decode()
   print('Client Router R0 send :\n ', msg)
   print ("#########################")
    
   
client.close()
