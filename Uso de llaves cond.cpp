#include <iostream>

int main()
{
	
	std::cout<<"ingrese un entero: ";
	int value {};
	std::cin >> value;
	if (value > 0)
	{
		if ((value % 2 )==0)
		{
			
			std::cout<<value<<"Es positivo y par...\n"
		
		}
		else
		{
			std::cout<<value<<" es positivo e impar\n";
			
		}
	}
	return 0;
}
