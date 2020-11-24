#include <iostream>

int num = 0;

int getpar(int a)
{
	
	return a ;
	
 } 
 
 bool IsEven(bool b)
 
 {
 	
 	if (getpar(num) % 2 == 0)
 	
 	 return b = true;
 	
 	else if (getpar(num) != 0)
 		
	return b = false;
	 
 }
 
 int main()
 
 {
 	
 	std::cout<<"Ingrese un numero cualquiera..."<<'\n';
 	std::cin>>num;
 	
 	 if (getpar(num) % 2 == 0  ) 
 	 {
 	std::cout<<IsEven<<'\n';
 	std::cout<<"El numero: "<<num<<" Es par"<<'\n';
	}	
 	else if (getpar(num)!= 0)
 	{ 
 	std::cout<<IsEven<<'\n';
 	std::cout<<"El numero: "<<num<<" Es impar"<<'\n'; 
 	}
 	return 0;
 	
 }
