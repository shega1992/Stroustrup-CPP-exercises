#include <iostream>
#include <initializer_list>

int main()
{
  std::initializer_list<int> il {4, 5, 9, 17, 12};

  for(auto x : il)
    std::cout << x << ' ';

  std::cout << '\n';
  return 0;
}

  
