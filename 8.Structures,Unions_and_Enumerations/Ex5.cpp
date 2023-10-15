#include <iostream>

enum class Season {spring, summer, autumn, winter};

Season & operator++(Season & s)
{
    switch(s)
    {
    case Season::spring:
        return s = Season::summer;
    case Season::summer:
        return s = Season::autumn;
    case Season::autumn:
        return s = Season::winter;
    case Season::winter:
        return s = Season::spring;
    }
}

Season & operator--(Season & s)
{
    switch(s)
    {
    case Season::spring:
        return s = Season::winter;
    case Season::summer:
        return s = Season::spring;
    case Season::autumn:
        return s = Season::summer;
    case Season::winter:
        return s = Season::autumn;
    }
}

std::istream & operator>>(std::istream & is, Season & s)
{
    char selection;
    std::cout << "Please select the season:\n"
              << "1.spring\n"
              << "2.summer\n"
              << "3.autumn\n"
              << "4.winter\n";
    is >> selection;
    switch(selection)
    {
    case '1':
        s = Season::spring;
        break;
    case '2':
        s = Season::summer;
        break;
    case '3':
        s = Season::autumn;
        break;
    case '4':
        s = Season::winter;
        break;
    default:
        std::cerr << "You've selected incorrect season\n";
        break;
    }
    return is;
}

std::ostream & operator<<(std::ostream & os, Season & s)
{
    os << "Your season: ";
    switch(s)
    {
    case Season::spring:
        os << "spring\n";
        break;
    case Season::summer:
        os << "summer\n";
        break;
    case Season::autumn:
        os << "autumn\n";
        break;
    case Season::winter:
        os << "winter\n";
        break;
    default:
        os << "You haven't selected the season\n";
        break;
    }
    return os;
}

void showmenu()
{
    std::cout << "Please select the option(q for exit):\n"
              << "1.Select the season\n"
              << "2.Display the season\n"
              << "3.Increment the season\n"
              << "4.Decrement the season\n";
}

int main()
{
    Season s;
    char selection;

    showmenu();
    while(std::cin >> selection && selection != 'q')
    {
        switch(selection)
        {
        case '1': std::cin >> s; break;
        case '2': std::cout << s; break;
        case '3': ++s; break;
        case '4': --s; break;
        default: std::cerr << "You've selected incorrect option. Please try again.\n";
        }
        showmenu();
    }

    return 0;
}
