#include "csvreader.h"

int main()
{
    CSV::CSVReader reader;
    CSV::File csv_file;

    csv_file = reader.readCSV("/home/hypertoken/learning/ML-From-Scratch/linear-regression/datasets/comptagesvelo2015.csv");

    for (std::string column : csv_file.header)
    {
        std::cout << column << std::endl;
    }
    

    return 0;
}