#ifndef ETL_H_
#define ETL_H_

#include <iostream>
#include <fstream>
#include <eigen3/Eigen/Dense>

class ETL
{
    std::string dataset; //name/location of data
    std::string delimiter; //delimeter for reading file
    bool header; //Whether we have a header or not when reading in data

public:
    //constructor
    ETL(std::string data, std::string separator, bool head) : dataset(data), delimiter(separator), header(head)
    {}

    
};

#endif