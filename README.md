# BFS-DFS
CSCE3110 Assignment 4- Breadth first and Depth first search of a graph.
Kelsee Villareal
ID 11409417

To compile run:
    g++ main.cpp -o search

To run:
    ./search input.txt

'input.txt' can replaced with the name of any input files. 'input.txt' is the test file already in this folder. 'input2.txt' is also provided.

This code can be broken down into multiple parts:
    Class Graph
        Members and member functions
    Main function

The class graph is used to define a graph and its attributes. These attributes include multiple maps and 3 functions, addEdge, BFS and DFS search.
addEdge:
    - This function takes in two integers provided by the main function. From there it adds the first       integer as the current vertex, and the second integer as an adjacent vertex.
BFS: 
    - This function conducts a BFS search by adding the current node to the queue, and then traversing each of its attached vertices and adding those as well. This is done until all vertices are added. From there the queue is printed to show the BFS search.
DFS:
    - This function conducts a DFS search by printing the current node and then recusivly calling itsself for each adjacent node.
Main:
    - The main function is the most complex. It begins by using fstream to read in the file provided while running. It reads this file into a 2D array of vectors. From here this vector is parsed and pushed into a vector of maps. These maps are traversed and are called by the addEdge function for a graph object. Lastly the BFS and DFS functions are called to provide the final searches.


    
