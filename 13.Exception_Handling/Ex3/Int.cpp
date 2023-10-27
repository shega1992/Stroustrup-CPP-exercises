#include "Int.h"

Int::Int(int v) : value(v)
{
}

Int::~Int()
{
}

Int Int::operator+(const Int & op) const
{
     if(!(value >> 31) && !(op.value >> 31) && value + op.value >> 31)
	  throw std::overflow_error("Overflow has occurred");
     else if(value >> 31 && op.value >> 31 && !(value + op.value >> 31))
	  throw std::underflow_error("Underflow has occurred");
     else
	  return Int(value + op.value);
}

Int Int::operator-(const Int & op) const
{
     if(!(value >> 31) && op.value >> 31 && value - op.value >> 31)
	  throw std::overflow_error("Overflow has occurred");
     else if(value >> 31 && !(op.value >> 31) && !(value - op.value >> 31))
	  throw std::underflow_error("Underflow has occurred");
     else
	  return Int(value - op.value);
}

std::ostream & operator<<(std::ostream & os, const Int & n)
{
     os << n.value;
     return os;
}
     


