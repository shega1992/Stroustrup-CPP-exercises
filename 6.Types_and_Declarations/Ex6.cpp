#include <iostream>

int main()
{
  enum class Colors{red,blue, green};
  
  std::cout << "char size: " << sizeof(char) << " byte(s)\n"
	    << "bool size: " << sizeof(bool) << " byte(s)\n"
	    << "short size: " << sizeof(short) << " byte(s)\n"
	    << "int size: " << sizeof(int) << " byte(s)\n"
	    << "long size: " << sizeof(long) << " byte(s)\n"
	    << "long long size: " << sizeof(long long) << " byte(s)\n"
	    << "float size: " << sizeof(float) << " byte(s)\n"
	    << "double size: " << sizeof(double) << " byte(s)\n"
	    << "long double size: " << sizeof(long double) << " byte(s)\n"
	    << "pointer to char size: " << sizeof(char *) << " byte(s)\n"
	    << "pointer to int size: " << sizeof(int *) << " byte(s)\n"
	    << "enum size: " << sizeof(Colors) << " byte(s)\n";

  return 0;
}
