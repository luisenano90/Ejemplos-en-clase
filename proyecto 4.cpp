#include <iostream>
int value{5};
void foo()
{
	std::cout<<"valor de la variable global: "<<value<<'\n';
}
int main()
{
	int value{7};
	++value;
	std::cout<<"Valor de variable local: "<<value<<'\n';
	
	foo();
	return 0;
}
