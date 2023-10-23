#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
    char ch;
    if(argc < 2)
        std::cerr << "No key is provided\n";
    else
    {
         std::string res;
         int i = 0;
         std::cout << "Please enter your string: ";
         while((ch = std::cin.get()) != '\n')
         {
             res += ch ^ argv[1][i];
             (argv[1][i+1] == '\0')? i = 0 : i++;

         }
        std::cout << res << std::endl;


         i = 0;
         for(unsigned int j = 0; j < res.size(); j++)
         {
             res[j] ^= argv[1][i];
             (argv[1][i+1] == '\0')? i = 0 : i++;
         }

          std::cout << "Decoded text: " << res << std::endl;
    }

    return 0;
}
