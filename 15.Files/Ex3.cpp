#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>

int main(int argc, char * argv[])
{
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " SRC_FILE...\n";
    exit(EXIT_FAILURE);
  }

  std::ifstream fin;
  std::string str;
  size_t pos;

  for(int i = 1; i < argc; i++) {
    fin.open(argv[i]);
    if(!fin.is_open()) {
      std::cerr << "Couldn't open " << argv[i] << std::endl;
      fin.clear();
    }
    else {
      std::cout << "The file names #included in " << argv[i] << ":\n";
      while(getline(fin, str)) {
	if((pos = str.find("#include")) != -1) {
	  if((pos = str.find('<',strlen("#include"))) != -1) {
	    while(++pos < str.length() && str[pos] != '>')
	      std::cout << str[pos];

	    if(pos == str.length())
	      std::cerr << "(Error. The ending '>' character is missing)";
	    std::cout << '\n';
	  }
	  else if((pos = str.find('\"',strlen("#include"))) != -1) {
	    while(++pos < str.length() && str[pos] != '\"')
	      std::cout << str[pos];

	    if(pos == str.length())
	      std::cerr << "(Error. The ending '\"' character is missing)";
	    std::cout << '\n';
	  }
	  else
	    std::cerr << "(Error. Empty 'include' directive)\n";
	}
      }
    }
    fin.clear();
    fin.close();
  }
	

  return 0;
}
