#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

void SELECTION_SORT(int arr[], int n)
{
    int temp, smallest;
    for(int i = 0; i < n - 1; i++)
    {
        smallest = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[smallest]) smallest = j;

        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}


int main()
{
    using namespace std::chrono;

    std::srand(std::time(NULL));
    const int Size = 10000;
    int arr[Size];

    for(int i = 0; i < Size; i++)
        arr[i] = std::rand();

    auto t0 = high_resolution_clock::now();
    SELECTION_SORT(arr, Size);
    auto t1 = high_resolution_clock::now();
    std::cout<<duration_cast<milliseconds>(t1-t0).count()<<" msec\n";

    return 0;
}
