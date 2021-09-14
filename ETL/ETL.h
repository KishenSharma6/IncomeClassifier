#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream>

using namespace std;

vector<pair<string, vector<int>>> read_csv(string filename){
    // Reads a CSV file into a vector of <string, vector<int>> pairs where
    // each pair represents <column name, column values>

    // Create a vector of <string, int vector> pairs to store the result
    vector<pair<string, vector<int>>> result;

    //Create an input filestream
    ifstream myFile(filename);

    // Check to see if file is open
    if(!myFile.is_open()) throw runtime_error("Could not open file");

    //Create helper vars
    string line, colname;
    int val;

    //Read column names
    if(myFile.good())//no error flags
    {
        //Extract first line in the file
        getline(myFile, line);

        //Create stringstream from line
        stringstream ss(line);

        //Extract column names
        while(getline(ss, colname, ',')){
            //Init and add <colname, int vector> pairs to result
            result.push_back({colname, vector<int> {}});
        }

    } 

    //Read data line by line
    while(getline(myFile, line))
    {
        //create stream of current line
        stringstream ss(line);

        //Track curr col index
        int colIndex= 0;

        //Extract each integer
        while(ss >> val){
            //Add the current integet to colIndex column's values vector
            result.at(colIndex).second.push_back(val);

            //If comma, ignore and move on
            if(ss.peek() == ',') ss.ignore();

            //Increment column index
            colIndex ++;


        }
    }
    //Close file
    myFile.close();

    return result;
}

