#include <iostream>

void swap_p(int *, int *);
void swap_r(int &, int &);

int main()
{
  int a = 5;
  int b = 7;

  std::cout << "Before swapping:\n"
	    << "a = " << a << std::endl
	    << "b = " << b << std::endl;

  std::cout << "---------------------------\n";

  swap_p(&a, &b);
  std::cout << "After swapping using pointer types:\n"
	    << "a = " << a << std::endl
	    << "b = " << b << std::endl;

  std::cout << "---------------------------\n";

  swap_r(a, b);
  std::cout << "After swapping using reference types:\n"
	    << "a = " << a << std::endl
	    << "b = " << b << std::endl;

  return 0;
}

void swap_p(int * a, int * b)
{
  int  temp = *a;
  *a = *b;
  *b = temp;
}

void swap_r(int & a, int & b)
{
  int temp = a;
  a = b;
  b = temp;
}



  
