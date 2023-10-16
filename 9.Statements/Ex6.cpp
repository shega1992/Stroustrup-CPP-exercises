#include <iostream>
#include <cmath>

char * itoa(int  i,  char  b[],  const int n);

int main()
{
    const int size = 4;
    int num;
    char str[size];
    std::cout << "Please enter the number: ";
    std::cin >> num;

    std::cout << itoa(num, str, size) << std::endl;

    return 0;
}

char * itoa(int  i,  char  b[],  const int n)
{
    int size;
    (i <= 0)? size = 2 : size = 1; // if i is negative or zero then add two extra location for '-' or 0 and '\0'
    for(int temp = i; temp != 0; temp /= 10, size++)
        ;
    if(n < size) { std::cout << "probably array size is too small to accommodate any number\n"; abort(); }

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
