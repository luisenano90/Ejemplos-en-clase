#include<iostream>
void passValue(int value)
{
	value = 99;
}
void PassArray(int prime[5])
{
	prime[0]=11;
	prime[1]=7;
	prime[2]=5;
	prime[3]=3;
	prime[4]=2;
}
int main()
{
	int value{1};
	std::cout<<"Antes de passvalue"<<value<<'\n';
	passvalue(value);
	std::cout<<"Despues de passvalue"<<value<<'\n';
	
	int prime[5]{2,3,5,7,11};
	std::cout<<"Antes de passarray:"<<prime[0]<<" "<<prime[1<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime{4}<<'\n';
	return 0;
}
