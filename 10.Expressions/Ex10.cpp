#include <iostream>
#include <cstring>

void rev(char *);

int main()
{
    // There can be driver

    return 0;
}

void rev(char * str)
{
    int i,j;
    for(i = 0, j = strlen(str) - 1; i < j; i++, j--)
        std::swap(str[i],str[j]);
}
