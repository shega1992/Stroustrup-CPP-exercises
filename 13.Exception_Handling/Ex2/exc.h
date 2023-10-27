#ifndef NOT_FOUND
#define NOT_FOUND

#include <iostream>
#include <string>

class Not_found
{
private:
     std::string str;
public:
     Not_found(const char * s) : str(s) {}
     void mesg() {std::cout << str << std::endl;}
};

#endif
