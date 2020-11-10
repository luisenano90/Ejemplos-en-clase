#include <iostream>

int main()
{
	
	std::cout<<"Ingrese un caracter...";
	char ch{};
	std::cin>>ch;
	std::cout<< "tine el codigo ascii: "<<static_cast<int>(ch)<< '\n';
	
	std::cin>>ch;
	std::cout<<ch<<"Tiene el codigo ascii: "<<static_cast<int>(ch)<<'\n';
	return 0;
	
	
	
}
