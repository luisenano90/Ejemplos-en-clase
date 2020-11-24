#include <iostream>

int main()

{
	std::cout<<"Ingrese un número: ";
	int value {};
	std::cin>>value;
	
	if (value == 0 || value == 1)
	
		std::cout<<"ingrese 0 o 1\n";
	else
		std::cout<<"Ingrese 0 o 1\n";
		
	return 0;
	
	
}
