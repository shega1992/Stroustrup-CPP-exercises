#include <iostream>
#include <stdexcept>
#include <chrono>

int foo(int );

int main()
{
  using namespace std::chrono;
  
  auto t0 = high_resolution_clock::now();
  foo(0);
  auto t1 = high_resolution_clock::now();
  std::cout<< "Result for returning from function: "
	   <<duration_cast<milliseconds>(t1-t0).count()<<" msec\n";

  try {
    t0 = high_resolution_clock::now();
    foo(1);
  }
  catch(std::runtime_error & re) {
    t1 = high_resolution_clock::now();
    std::cout<< "Result for throwing from function: "
	     <<duration_cast<milliseconds>(t1-t0).count()<<" msec\n";
  }

  return 0; 
    
}

int foo(int x)
{
  if(!x)
    return x;
  else
    throw std::runtime_error("x is not equal 0");
}
