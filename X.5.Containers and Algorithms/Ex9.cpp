#include <iostream>
#include <fstream>

int main()
{
    std::ofstream os {"integers.txt"};

    for(int i = 0; i < 300; i++)
    {
        os << i << ' ';
        if(i % 10 == 9)
            os << '\n';
    }

    os.close();

    return 0;
}
