#include <iostream>
#include <locale.h>

int num1, num2, helper = 0;
using namespace std;

int main()
{
	setlocale(LC_ALL,"spanish");
	
	cout<<"ingrese un número pequeño.."<<endl;
	cin>>num1;
	
	cout<<"ingrese un número grande..."<<endl;
	cin>>num2;
	
	if (num1>num2)
	
		{
			helper = num1;
			num1 = num2;
			num2 = helper;	
		}
		
		cout<<"el número menor es: "<<num1<<endl;
		cout<<"el número mayor es: "<<num2<<endl;
		
	return 0;
}
