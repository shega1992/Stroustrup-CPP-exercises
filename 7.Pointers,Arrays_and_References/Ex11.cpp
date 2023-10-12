#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  std::vector<std::string> words;
  std::string temp;

  std::cout << "Please enter the words(\"Quit\" for exit): ";
  while(getline(std::cin, temp) && temp != "Quit")
    if(std::find(words.begin(), words.end(), temp) == words.end())
      words.push_back(temp);

  std::cout << "Word list:\n";
  for(auto x : words)
    std::cout << x << std::endl;

  sort(words.begin(), words.end());
  std::cout << "-----------------------------------\n"
	    << "Sorted word list:\n";
  for(auto x : words)
    std::cout << x << std::endl;
}

      
