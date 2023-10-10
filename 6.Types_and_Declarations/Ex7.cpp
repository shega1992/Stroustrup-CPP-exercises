#include <iostream>

int main()
{
  using std::cout;
  using std::hex;
  using std::dec;
  using std::endl;
  
  for(int i = 32; i <=127; i++)
    cout << "Character: " << static_cast<char>(i)
	 << " ASCII Code(decimal and hexadecimal): " << i << ' ' << hex << i << dec << endl;

  return 0;
}
