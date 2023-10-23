#include <iostream>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cerr << "Error. Name is not provided\n";
        exit(EXIT_FAILURE);
    }
    std::cout << "Hello";
    for(int i = 1; i < argc; i++)
        std::cout << ", " << argv[i];
    std::cout << "!\n";

    return 0;
}
