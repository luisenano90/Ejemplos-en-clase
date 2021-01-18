#include <iostream>

int main()
{
	
	double batteryLifeInHours[3]{};
	
	batteryLifeInHours[0] = 2.0;
	batteryLifeInHours[1] = 3.0;
	batteryLifeInHours[2] = 4.3;
	
	std::cout<<"La duracion media de la batería es_ "<<
	(batteryLifeInHours[0]+batteryLifeInHours[1]+batteryLifeInHours[2]/3.0)/3.0<<" Hora(s)"<<'\n';
	
	return 0;
}
