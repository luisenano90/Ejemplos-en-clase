#include <iostream>
#include <iterator>

int main()
{
	char mystring[]{"string"};
	const int length{static_cast<int>(std::size(mystring))};
	std::cout<<mystring<<"tiene"<<length<<" caracteres.\n";
	
	for (int index{0};index < length;++index)
	std::cout<<static_cast<int>(mystring[index])<<' ';
	
	std::cout<<'\n';
	return 0;
	
}
