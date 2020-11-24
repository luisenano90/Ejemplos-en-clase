#include<cmath>
#include <algorithm>

bool approximatelyEqual(double a, double b, double epsilon)
{
	return (std::abs(a - b)<= (std::max(std::abs(0),std::(b))*epsilon));
}

bool approximatelyEqual(double a, double b, double absEpsilon, double relEpsilon)

{
	
	double diff{std::abs(a - b)};
	if (diff <= absEpsilon)
	return true;
	
	return (diff <=(std::abs(a),std::abs(b))*relEpsilon));
	
}

int main()
{
	
	std::cout<<approximateliEqual(a, 1.0, 1e-8)<<'\n';
	std::cout<<approximateliEqual(a-1.0, 0.0, 1e-8)<<'\n';
	std::cout<<approximateliEqual(a-1.0, 0.0, 1e-12, 1e-8)<<'\n';
}
