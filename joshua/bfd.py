import pdb
"""
The Bellman-Ford algorithm
routes API:
    iter(routes) gives all nodes
    iter(routes[u]) gives neighbours of u
    routes[u][v] gives weight of edge (u, v)
"""

# Step 1: For each node prepare the destination and predecessor
def initialize(routes, source):
    d = {} # Stands for destination
    p = {} # Stands for predecessor
    for node in routes:
        d[node] = float('Inf') # We start admiting that the rest of nodes are very very far
        p[node] = None
    d[source] = 0 # For the source we know how to reach
    return d, p

def relax(node, neighbour, routes, d, p):
    # If the distance between the node and the neighbour is lower than the one I have now
    if d[neighbour] > d[node] + routes[node][neighbour]:
        # Record this lower distance
        d[neighbour]  = d[node] + routes[node][neighbour]
        p[neighbour] = node

def first_route_cost(routes,source):
    d, p = initialize(routes, source)
    crawl = 0;
    for i in range(len(routes)-1): #Run this until is converges
        for u in routes:
            for v in routes[u]: #For each neighbour of u
                relax(u, v, routes, d, p) #Lets relax it
                if crawl==1:
                    return d
                else:
                    crawl=crawl+1


def bellman_ford(routes, source):
    d, p = initialize(routes, source)
    for i in range(len(routes)-1): #Run this until is converges
        for u in routes:
            for v in routes[u]: #For each neighbour of u
                relax(u, v, routes, d, p) #Lets relax it

    # Step 3: check for negative-weight cycles
    for u in routes:
        for v in routes[u]:
            assert d[v] <= d[u] + routes[u][v]

    return d
