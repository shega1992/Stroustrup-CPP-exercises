#include <iostream>
#include <string>
#include <cstring>

int num_of_occur_ch(const char *str, const char *substr)
{
    int count = 0;
    while((str = strstr(str,substr)))
    {
        count++;
        str += strlen(substr);
    }

    return count;
}

int num_of_occur_str(const std::string str, const char *substr)
{
    int count = 0;
    int pos = 0;
    while((pos = str.find(substr, pos)) != -1)
    {
        count++;
        pos += strlen(substr);
    }

    return count;
}

int main()
{
    const char * str = "xabaacbaxabb";
    const char * substr = "ab";

    std::cout << "Test for C-style string function:\n";
    std::cout << "Number of occurrences of " << substr << " in " << str << ':'
              << num_of_occur_ch(str,substr) << std::endl;

     std::cout << "Test for C++ style string function:\n";
     std::cout << "Number of occurrences of " << substr << " in " << str << ':'
               << num_of_occur_str(str,substr) << std::endl;

    return 0;
}
