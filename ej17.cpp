#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
	int array[]{30,50,20,10,40};
	constexpr int lenght{static_cast<int>(std::size(array))};
	
	for (int startindex{0}; starindex < length - 1; ++startindex)
	{
		int smallestindex{startindex};
		for (int currentindex{startindex+1}; currentindex < length; ++currentindex)
		{
			if (array[currentindex]<array[smallestindex])
			smallestindex = currentindex;
		}
		
		std::swap(array[startindex],array[smallestindex]);
		
	}
	for (int index{0}; index<length; ++index)
	std::cout<<array[index]<<' ';
	
	std::cout<<'\n';
}
