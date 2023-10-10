#include <iostream>
#include <limits>

int main()
{
  
  std::cout << "Smallest value of bool: " << std::numeric_limits<bool>::min() << '\n'
	    << "Smallest value of char: " << (int)std::numeric_limits<char>::min() << '\n'
	    << "Smallest value of short: " << std::numeric_limits<short>::min() << '\n'
	    << "Smallest value of int: " << std::numeric_limits<int>::min() << '\n'
	    << "Smallest value of long: " << std::numeric_limits<long>::min() << '\n'
	    << "Smallest value of long long: " << std::numeric_limits<long long>::min() << '\n'
	    << "Smallest value of float: " << std::numeric_limits<float>::min() << '\n'
	    << "Smallest value of double: " << std::numeric_limits<double>::min() << '\n'
	    << "Smallest value of long double: " << std::numeric_limits<long double>::min() << '\n'
	    << "Smallest value of unsigned: " << std::numeric_limits<unsigned>::min() << '\n'
	    << "Smallest value of unsigned long: " << std::numeric_limits<unsigned long>::min() << '\n';

  std::cout << "---------------------------------------------------------------\n";
  
  std::cout << "Largest value of bool: " << std::numeric_limits<bool>::max() << '\n'
	    << "Largest value of char: " << (int)std::numeric_limits<char>::max() << '\n'
	    << "Largest value of short: " << std::numeric_limits<short>::max() << '\n'
	    << "Largest value of int: " << std::numeric_limits<int>::max() << '\n'
	    << "Largest value of long: " << std::numeric_limits<long>::max() << '\n'
	    << "Largest value of long long: " << std::numeric_limits<long long>::max() << '\n'
	    << "Largest value of float: " << std::numeric_limits<float>::max() << '\n'
	    << "Largest value of double: " << std::numeric_limits<double>::max() << '\n'
	    << "Largest value of long double: " << std::numeric_limits<long double>::max() << '\n'
	    << "Largest value of unsigned: " << std::numeric_limits<unsigned>::max() << '\n'
	    << "Largest value of unsigned long: " << std::numeric_limits<unsigned long>::max() << '\n';

  return 0;
}
  
    
