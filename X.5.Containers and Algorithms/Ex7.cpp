#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec {5, 9, -1, 200, 0};

    std::cout << "vector before sorting: ";
    for(auto & x : vec)
        std::cout << x << ' ';

    std::sort(vec.begin(), vec.end());

    std::cout << "\nvector after sorting: ";
    for(auto & x : vec)
        std::cout << x << ' ';

    return 0;
}
