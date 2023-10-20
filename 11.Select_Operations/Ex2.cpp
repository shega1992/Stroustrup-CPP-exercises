#include <iostream>

int main()
{
    int * ptr;
    try
    {
        ptr = new int[1000000000];
    }
    catch(std::bad_alloc & ba)
    {
        std::cout << ba.what() << std::endl;
        exit(EXIT_FAILURE);
    }


    return 0;
}
