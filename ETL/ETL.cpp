#include "ETL.h"


int main() {
    // Read three_cols.csv and ones.csv
    std::vector<std::pair<std::string, std::vector<int>>> three_cols = read_csv("../Dataset/adultCensusIncome.csv");
    

    
    return EXIT_SUCCESS;
}