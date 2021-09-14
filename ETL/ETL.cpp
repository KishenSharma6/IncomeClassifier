#include "ETL.h"


int main() {
    // Read three_cols.csv and ones.csv
    std::vector<std::pair<std::string, std::vector<int>>> three_cols = read_csv("three_cols.csv");
    std::vector<std::pair<std::string, std::vector<int>>> ones = read_csv("ones.csv");

    
    return 0;
}