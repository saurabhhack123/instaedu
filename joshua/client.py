import socket
from bfd import *


routes = {
        'R0': {'R1': 1},
        'R1': {'R2':  2, 'R3':  2},
        'R2': {},
        'R3': {'R2':  -1}
        }

s = socket.socket()

host = "127.0.0.1"
port = 50007
s.connect((host, port))


intial_route = first_route_cost(routes, 'R0')
print ("Sending initial cost from router 0 to other router's")
print (intial_route)

s.send("Initial cost from router 0 to other router's")
s.send(str(intial_route))

final_routes = bellman_ford(routes, 'R0')

print ("\nSending final routing costs from router0 to others")
print (final_routes)

s.send("Final routing costs from router0 to others using BFD algo")
s.send(str(final_routes))

s.close
print ('Client: Connection closed')
