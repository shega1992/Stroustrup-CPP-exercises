#include <iostream>
#include <cstring>

const char * cat(const char *, const char *);

int main()
{
    const char * s1 = "Iron ";
    const char * s2 = "Maiden";

    const char * res = cat(s1,s2);
    std::cout << res << std::endl;

    delete [] res;

    return 0;
}

const char * cat(const char * s1, const char * s2)
{
    char * res = new char[strlen(s1) + strlen(s2) + 1];

    strcpy(res, s1);
    strcpy(res + strlen(res), s2);

    return res;
}
