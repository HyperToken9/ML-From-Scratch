#include<iostream>
#include<string>
#include <math.h>
#include<vector>

#include<fstream>
#include<sstream>

#include "csv_file.h"

namespace CSV
{
    class CSVReader
    {
        public:
            CSV::File readCSV(std::string filename);
    };
}