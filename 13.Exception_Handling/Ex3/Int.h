#ifndef INT_H
#define INT_H

#include <iostream>

class Int
{
private:
  int value;
public:
  Int(int v);
  ~Int();
  Int operator+(const Int & op) const;
  Int operator-(const Int & op) const;
  friend std::ostream & operator<<(std::ostream & os, const Int & n);
};

#endif
