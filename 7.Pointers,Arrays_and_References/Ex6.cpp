#include <iostream>

int main()
{
  const int Size = 10;
  int arr_a[Size];
  static int arr_s[Size];
  int * arr_d = new int[Size];

  //stack smashing detected for arr_a[Size] on my system (gcc compiler)
  arr_a[Size] = 999; // just beyond the end of automatic array
  arr_a[Size + 100] = 9999; // far beyond the end of automatic array
  arr_a[-1] = -999; // just before the beginning of automatic array
  arr_a[-101] = -9999; // far before the beginning of automatic array
  std::cout << "arr_a[Size] = " << arr_a[Size] << std::endl
	    <<"arr_a[Size + 100] = " << arr_a[Size + 100] << std::endl
	    <<"arr_a[-1] = " << arr_a[-1] << std::endl
	    <<"arr_a[-101] = " << arr_a[-101] << std::endl;

  std::cout << "-------------------------------------------\n";

  // segmentation fault for arr_s[-101] on my system (gcc compiler)
  arr_s[Size] = 888; // just beyond the end of static array
  arr_s[Size + 100] = 8888; // far beyond the end of static array
  arr_s[-1] = -888; // just before the beginning of static array
  arr_s[-101] = -8888; // far before the beginning of static array
  std::cout << "arr_s[Size] = " << arr_s[Size] << std::endl
	    <<"arr_s[Size + 100] = " << arr_s[Size + 100] << std::endl
	    <<"arr_s[-1] = " << arr_s[-1] << std::endl
	    <<"arr_s[-101] = " << arr_s[-101] << std::endl;

  std::cout << "-------------------------------------------\n";

  // error when reading values from an array on my system(gcc compiler)
  arr_d[Size] = 777; // just beyond the end of dynamic array
  arr_d[Size + 100] = 7777; // far beyond the end of dynamic array
  arr_d[-1] = -777; // just before the beginning of dynamic array
  arr_d[-101] = -7777; // far before the beginning of dynamic array
  std::cout << "arr_d[Size] = " << arr_d[Size] << std::endl
	    <<"arr_d[Size + 100] = " << arr_d[Size + 100] << std::endl
	    <<"arr_d[-1] = " << arr_d[-1] << std::endl
	    <<"arr_d[-101] = " << arr_d[-101] << std::endl;

  delete [] arr_d;

  return 0;
}

  

  
  
