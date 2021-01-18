#include <iostream>
#include <cstring>
#include <iterator>

int main()
{
	char name[20]{"geovany"};
	std::cout<<"mi nombre es: "<<name<<'\n';
	std::cout<<name<<"tiene "<<std::strlen(name)<<" letras.\n";
	std::cout<<"tiene "<<std::size(name)<<" Caracteres en el array. \n";
	
	return 0;
}
