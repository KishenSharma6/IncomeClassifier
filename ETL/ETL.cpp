//Implementation files to build necessary libraries
#include "ETL.h"

#include <vector>
#include <stdlib.h>
#include <cmath>
#include <boost/algorithm/string.hpp>

//Parse content of CSV file line by line  and store data as vector of strings 
std::vector<std::vector<std::string>> ETL::readCSV(){

    // use ifstream to open file for reading purposes only
    std::ifstream file(dataset);
    //vector of vector of strings to store and return data
    std::vector<std::vector<std::string>> dataString;
    
    std::string line = "";

    //split line using limiter provided from constructor
    while(getline(file, line)){
        std::vector<std::string> vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
        dataString.push_back(vec);
    }

    //close file and return vector of strings 
    file.close();
    return dataString;
}