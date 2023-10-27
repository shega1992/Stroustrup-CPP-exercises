#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <climits>
#include "Int.h"

int main()
{
  Int a(5);
  Int b(2);

  try {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    a = INT_MAX;
    b = -1;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
  }
  catch(std::runtime_error & re) {
    std::cout << re.what() << std::endl;
    exit(EXIT_FAILURE);
  }

  return 0;
}
  
