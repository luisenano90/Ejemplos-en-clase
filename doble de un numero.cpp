#include <iostream>

int main()
{
	
	std::cout<<"ingrese un entero: \n";
	int value{};
	std::cin>>value;
	
	if (value >= 0)
	{
		
		std::cout <<value <<"Es un numero positivo o cero \n";
		std::cout<<value<<"El doble de este numero es: "<<value * 2 <<'\n';
		
		
	}
	else 
	{
		std::cout<<value<<"es un numero negativo\n";
		std::cout<<"el numero es positivo de este numero es: "<<-value<<'\n';
		
	}
	
	return 0;
}
