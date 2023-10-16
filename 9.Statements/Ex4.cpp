#include <iostream>
#include <cctype>
#include <cmath>

int atoi(const char *);
int letter_to_digit(const char);

int main()
{
    std::cout << atoi("0xFF") << std::endl;

    return 0;
}

int atoi(const char * str)
{
    int n = 0;
    if(*str == '0' && *(str + 1) >= '0' && *(str + 1) <= '7')
    {
        int p = -1;
        for(int i = 1; str[i] >= '0' && str[i] <= '7'; i++)
            p++;
        for(int i = 1; p >= 0; i++, p--)
            n += (str[i] - 48) * pow(8.0, p);
    }
    else if(*str == '0' && tolower(*(str + 1)) == 'x')
    {
        int p = -1;
        for(int i = 2; isdigit(str[i]) || tolower(str[i]) >= 'a' && tolower(str[i]) <= 'f'; i++)
            p++;
        for(int i = 2; p >= 0; i++, p--)
            (isalpha(str[i]))? n += letter_to_digit(str[i]) * pow(16.0, p) :
                               n += (str[i] - 48) * pow(16.0, p);
    }
    else if(*str >= '1' && *str <= '9' || *str == '-' && *(str + 1) != '0')
    {
        int sign = 1;
        if(*str == '-')
        {
            sign *= -1;
            str++;
        }
        while(isdigit(*str))
        {
            n = n * 10 + *str - 48;
            str++;
        }
        n *= sign;
    }

     return n;
}

int letter_to_digit(const char c)
{
    switch(c)
    {
        case 'A': case 'a': return 10;
        case 'B': case 'b': return 11;
        case 'C': case 'c': return 12;
        case 'D': case 'd': return 13;
        case 'E': case 'e': return 14;
        case 'F': case 'f': return 15;
    }

}
