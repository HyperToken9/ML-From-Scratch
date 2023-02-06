#include <vector>
#include <string>

namespace CSV
{
    class File
    {
        public:
            std::vector<std::string> header;
            std::vector<std::vector<double>> data;

    };
}