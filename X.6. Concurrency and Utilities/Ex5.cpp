#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <regex>

int main(int argc, char * argv[])
{
    if(argc != 2)
    {
        std::cerr << "Usage: program name " << "filename" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream is {argv[1]};
    if(!is.is_open())
    {
        std::cerr << "Can't open " << argv[1] << std::endl;
        exit(EXIT_FAILURE);
    }

    std::regex pat(R"(0|-?[1-9]\d*)");

    int lineno = 0;
    for(std::string line; getline(is, line);)
    {
        ++lineno;
        std::smatch matches;
        if(regex_match(line,matches,pat))
            std::cout << lineno << ": " << matches[0] << std::endl;
    }

    is.close();

    return 0;
}
