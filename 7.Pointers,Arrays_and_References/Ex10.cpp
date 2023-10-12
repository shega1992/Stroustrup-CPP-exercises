#include <iostream>
#include <string>

void print(std::string [], int );

int main()
{
  std::string months[] = {"January", "February", "March", "April", "May", "June",
			  "July", "August", "September", "October", "November", "December"};

  print(months, sizeof(months)/sizeof(std::string));

  return 0;
}

void print(std::string months[], int n)
{
  for(int i = 0; i < n; i++)
    std::cout << months[i] << std::endl;
}
  
