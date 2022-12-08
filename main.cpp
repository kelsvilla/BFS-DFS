/*
Kelsee Villareal
11409417
CSCE3110- Assignment 4
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main(int argc, char *argv[]){

// Check to see if file is provided. If file is not, exit.
    if(argc == 1){
        cout << "No input file present";
        exit(0);}

// Defining variables and data structures.
    string inputFile = argv[1];
    ifstream myFile(inputFile);
    vector<vector<int>> graph;
    vector<map<int, int>> adj;

// Open file and read information into 2d vector.
    if(myFile.is_open()){
       string line;

        while(getline(myFile, line)){
         vector<int> row;
          for(char &c: line){

            if(c != ' '){
                int N = static_cast<int>(c);
                N = N-48;
                row.push_back(N);
            }
          }
          graph.push_back(row);
        }
    }

// Make map pairs from the original 2d vector and add them to blank vector. These show adjacent vertices.
    for(int i=0; i<graph.size(); i++){
        int a = graph[i][0];
        for(int j=1; j<graph[i].size(); j++){
            int b = graph[i][j];
            map<int, int> m;
            m.insert({a,b});

            adj.push_back(m);
        }
    }

// Test checking maps were created correctly.
/*
    for(int i=0; i <adj.size(); i++){
        map<int, int>::iterator itr;
        for(itr = adj[i].begin(); itr != adj[i].end(); ++itr){
            cout << itr->first << " " << itr->second << endl;
            }
    }
*/
    return 0;
}