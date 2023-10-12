#include <iostream>

int main()
{
    char ch[5];
    char *pc1 = &ch[0];
    char *pc2 = &ch[4];

    std::cout << pc2 - pc1 << std::endl;

    return 0;
}
