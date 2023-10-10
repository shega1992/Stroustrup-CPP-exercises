#include <iostream>

int main()
{
  std::cout << "Alignment of bool: " << alignof(bool) << '\n'
	    << "Alignment of char: " << alignof(char) << '\n'
	    << "Alignment of short: " << alignof(short) << '\n'
	    << "Alignment of int: " << alignof(int) << '\n'
	    << "Alignment of long: " << alignof(long) << '\n'
	    << "Alignment of long long: " << alignof(long long) << '\n'
	    << "Alignment of float: " << alignof(float) << '\n'
	    << "Alignment of double: " << alignof(double) << '\n'
	    << "Alignment of long double: " << alignof(long double) << '\n'
	    << "Alignment of unsigned: " << alignof(unsigned) << '\n'
	    << "Alignment of unsigned long: " << alignof(unsigned long) << '\n';

  return 0;
}
