#include "ETL/ETL.h"

#include <iostream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>


int main(int argc, char *argv[]){
    //Create object if ETL that will include 3 input args of ETL: input name, delimiter, flag
    ETL etl(argv[1], argv[2], argv[3]);
     
    //Get data from CSV file using readCSV method **NOTE** we dont have a way of storing this data yet
    std::vector<std::vector<std::string>> dataset = etl.readCSV();

    int rows= dataset.size();
    int cols= dataset[0].size();

    Eigen::MatrixXd dataMat = etl.CSVtoEigen(dataset, rows, cols);

    return EXIT_SUCCESS;

}