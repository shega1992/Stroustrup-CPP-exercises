#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

int main()
{
   std::ifstream is{"integers.txt"};
   std::istream_iterator<int> ii {is};
   std::istream_iterator<int> eos {};

   std::vector<int> vec {ii, eos};

    for(auto & x: vec)
    {
        std::cout << x << ' ';
        if(x % 10 == 9)
            std::cout << '\n';
    }

    is.close();

    return 0;
}
