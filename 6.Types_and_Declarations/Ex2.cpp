#include <iostream>

int main()
{
  char c = 255;
  int i = c;

  (i == -1)? std::cout << "signed\n" : std::cout << "unsigned\n";
  return 0;
}
