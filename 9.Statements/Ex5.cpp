#include <iostream>
#include <cmath>

char * itoa(int  i,  char  b[]);

int main()
{
    int num;
    char str[12];
    std::cout << "Please enter the number: ";
    std::cin >> num;

    std::cout << itoa(num, str) << std::endl;

    return 0;
}

char * itoa(int  i,  char  b[])
{
    int size;
    (i <= 0)? size = 2 : size = 1; // if i is negative or zero then add two extra location for '-' or 0 and '\0'
    for(int temp = i; temp != 0; temp /= 10, size++)
        ;

    b[--size] = '\0';
    if(!i)
        b[--size] = i + 48;
    else
    {
       while(i)
        {
            b[--size] = abs(i % 10) + 48;
            i /= 10;
        }
        if(size) b[--size] = '-';
    }

    return b;
}
