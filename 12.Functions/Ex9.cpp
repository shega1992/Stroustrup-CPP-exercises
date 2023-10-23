#include <iostream>

void reverse(int * , int *);

int main()
{
    const int Row = 3;
    const int Col = 5;

    int numbers[Row][Col] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};

    reverse(numbers[0], numbers[0] + Row * Col - 1);

    for(int i = 0; i < Row; i++)
    {
         for(int j = 0; j < Col; j++)
            std::cout << numbers[i][j] << ' ';
         std::cout << '\n';
    }



    return 0;
}

void reverse(int * start, int * end)
{
   while(start < end)
        std::swap(*start++, *end--);
}
