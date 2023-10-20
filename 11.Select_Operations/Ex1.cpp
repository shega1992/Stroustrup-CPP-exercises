#include <iostream>
#include <ctime>
#include <vector>

void generate_num(int *, int *);
void copy_even_num(std::vector<int> & , int *, int *);

int main()
{
    const int Size = 10;
    srand(time(0));

    int numbers[Size];
    std::vector<int> even;

    generate_num(numbers, numbers + Size);
    copy_even_num(even, numbers, numbers + Size);

    return 0;
}

void generate_num(int * start, int * end)
{
    while(start < end)
        *start++ = rand();
}

void copy_even_num(std::vector<int> & v, int * start, int * end)
{
    while(start < end)
    {
        if(*start % 2 == 0)
            v.push_back(*start);
        start++;
    }
}
