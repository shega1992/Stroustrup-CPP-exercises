#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> vec {"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};

    std::cout << "vector before sorting:\n";
    for(auto & x : vec)
        std::cout << x << '\n';

    std::sort(vec.begin(), vec.end());

    std::cout << "\nvector after sorting:\n";
    for(auto & x : vec)
        std::cout << x << '\n';

    return 0;
}
