#include <iostream>

int Factorial(int n)
{
    int res = 1;
    if(n < 0)
    {
        std::cerr << "Negative number is not allowed for the factorial" << std::endl;
        exit(EXIT_FAILURE);
    }
    else
        for(int i = 1; i <= n; i++)
            res *= i;
    return res;
}

int main()
{
    int n;

    std::cout << "Your number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << Factorial(n) << std::endl;

    return 0;
}
