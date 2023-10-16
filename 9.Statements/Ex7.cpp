#include <iostream>
#include <string>
#include <limits>

void strip_cpp_comment();
void strip_c_comment();

int main()
{
    std::string buffer;
    int ch;

    while((ch = std::cin.get()) != EOF )
    {
        if(ch == '/' && std::cin.peek() == '/')
            strip_cpp_comment();
        else if(ch == '/' && std::cin.peek() == '*')
            strip_c_comment();
        else if(ch == '"')
        {
            buffer += ch;
            while((ch = std::cin.get()) != '"')
            {
                if(ch == '\\')
                {
                    buffer += ch;
                    ch = std::cin.get();
                }
                buffer += ch;
            }
            buffer += ch;
        }
        else if(ch == '\'')
        {
            buffer += ch;
            while((ch = std::cin.get()) != '\'') // this is not quite correct. There is an opportunity for multi-character constant
            {
                if(ch == '\\')
                {
                    buffer += ch;
                    ch = std::cin.get();
                }
                buffer += ch;
            }

            buffer += ch;
        }
        else if(ch == '/')
        {
            std::cerr << "Error in program. Single '/'(unterminated comment)\n";
            exit(EXIT_FAILURE);
        }
        else
            buffer += ch;
    }


    std::cout << "Your program without comments:\n" << buffer;

    return 0;
}

void strip_cpp_comment()
{
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   std::cin.putback('\n');
}

void strip_c_comment()
{
    bool terminated = false;

    std::cin.get(); // extract '*'
    while(std::cin.peek() != '/' && !std::cin.eof())
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '*');
        terminated = true & !std::cin.eof();
    }

    if(terminated) std::cin.get(); else {std::cerr << "Error in program. Unterminated comment\n"; exit(EXIT_FAILURE);}
}



