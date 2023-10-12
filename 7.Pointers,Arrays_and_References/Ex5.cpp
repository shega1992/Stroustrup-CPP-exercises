#include <iostream>

int main()
{
    int val[5];
    int *pval = &val[0];
    int *pval2 = &val[4];

    std::cout << pval2 - pval << std::endl;

    return 0;
}
