#include <iostream>
#include <string>

struct Entry
{
    std::string name;
    int age;
};


int main()
{
    Entry entry;

    std::cout << "Enter your name and age: ";
    std::cin >> entry.name >> entry.age;

    std::cout << "Name: " << entry.name << ", Age: " << entry.age << std::endl;

    return 0;
}
