#include <iostream>
#include <vector>
#include <utility>

std::istream & operator>>(std::istream & is, std::pair<std::string,int> & p)
{
    is >> p.first >> p.second;
    return is;
}

std::ostream & operator<<(std::ostream & os, const std::pair<std::string,int> & p)
{
    os << "Name: " << p.first << ", Age: " << p.second << std::endl;
    return os;
}


int main()
{
    std::vector<std::pair<std::string,int>> my_list;
    std::pair<std::string,int> p;
    char answer;

    std::cout << "Do your want to add a new pair into list?(y/n): ";
    while(std::cin >> answer && answer != 'n')
    {
        std::cout << "Please enter name and age: ";
        std::cin >> p;
        my_list.push_back(p);
        std::cout << "Do your want to add a new pair into list?(y/n)";
    }

    std::cout << "Your list:\n";
    for(auto & x: my_list)
        std::cout << x;

    return 0;
}
