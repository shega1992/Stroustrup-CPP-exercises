#include <iostream>

struct Smallest
{
  bool b;
  char ch;
  int i;
  long l;
  double d;
  long double ld;
};

struct Largest
{
  long double ld;
  int i;
  long l;
  bool b;
  double d;
  char ch;
};

int main()
{
  std::cout << "Smallest structure size: " << sizeof(Smallest) << std::endl
	    << "Largest structure size: " << sizeof(Largest) << std::endl;

  return 0;
}
  
