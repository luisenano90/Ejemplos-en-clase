#include <iostream>
#include <string_view>

int main()
{
	std::string_view text{"hola"};
	std::string_view std{text};
	std::string_view more{str};
	
	std::cout<<text<<' '<<str<<' '<<more<<'\n';
	
	return 0;
}
