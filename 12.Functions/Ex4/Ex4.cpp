#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    int ch;
    if(argc < 2)
    {
        while((ch = std::cin.get()) != EOF)
            std::cout << static_cast<char>(ch);
    }
    else
    {
        std::ifstream fin;
        for(int i = 1; i < argc; i++)
        {
            fin.open(argv[i]);
            if(!fin.is_open())
            {
                std::cerr << "Can't open " << argv[i] << std::endl;
                exit(EXIT_FAILURE);
            }
            while((ch = fin.get()) != EOF)
                std::cout << static_cast<char>(ch);
            fin.clear();
            fin.close();
        }
    }

    return 0;
}
