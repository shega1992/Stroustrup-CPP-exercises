#include <iostream>

int main()
{
  std::cout << "Alignment of pointer to char: " << alignof(char *) << '\n'
	    << "Alignment of pointer to int: " << alignof(int *) << '\n'
	    << "Alignment of pointer to void: " << alignof(void *) << '\n';

  return 0;
}
