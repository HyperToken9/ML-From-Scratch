#include "csvreader.h"


CSV::File CSV::CSVReader::readCSV(std::string filename)
{
    std::cout << "Reading CSV file "<< filename << std::endl;
    
    std::string line, word;
    std::vector<double> row;
    CSV::File csv;

    std::fstream file(filename, std::ios::in);

    if (!file.is_open())
    {
        std::cout << "Could not open the file\n";
        // Exit wioth error
        exit(EXIT_FAILURE);
    }

    // Read the header
    getline(file, line);
    std::stringstream str(line);
    
    while (getline(str, word, ','))
    {
        // std::cout << word << std::endl;
        csv.header.push_back(word);
    }

    // Read the data
    while (getline(file, line))
    {            
        std::stringstream str(line);

        while (getline(str, word, ','))
        {    
            
            if (word.empty())
            {
                // std::cout << "Empty value" << std::endl;
                row.push_back(NAN);
            }
            else
            {
                // std::cout << word << std::endl;
                row.push_back(std::stod(word));
            }
        }
        csv.data.push_back(row);
        row.clear();
    }

    return csv;

}


