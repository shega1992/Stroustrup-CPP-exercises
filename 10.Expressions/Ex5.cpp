#include <iostream>
#include <climits>

int main()
{
  std::cout << INT_MAX << " + 1 = " << INT_MAX + 1 << std::endl
	    << INT_MIN << " - 1 = " << INT_MIN - 1 << std::endl
	    << "1/0 = " << 1/0 << std::endl;

  return 0;
}
  
