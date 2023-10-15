#include <iostream>

struct Table
{
    const char months[5];
    const int days;
};

int main()
{
    const char * months[] {"","Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
    const int days[] {0,31,28,31,30,31,30,31,31,30,31,30,31};

    std::cout << "Using arrays:\n";
    for(size_t i = 1; i < sizeof months / sizeof(char *); i++)
        std::cout << months[i] << ':' << days[i] << std::endl;

    Table md[] = { {"", 0},
    {"Jan",31},{"Feb",28},{"Mar",31},{"Apr",30},{"May",31},{"June",30},
    {"July",31},{"Aug",31},{"Sep",30},{"Oct",31},{"Nov",30},{"Dec",31}
    };

    std::cout << "Using structure:\n";
    for(size_t i = 1; i < sizeof md / sizeof(Table); i++)
        std::cout << md[i].months << ':' << md[i].days << std::endl;

    return 0;
}
