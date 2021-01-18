#include <iostream>
#include <iterator>

int main()
{
	
	constexpr int scores[]{84,92,76,81,56};
	constexpr int numstudents{static_cast<int>(std::size(scores))};
	
	int maxscore{0};
	for (int student{0};student < numstudents;++student)
	{
		if(scores[student]>maxscore)
		{
			maxscore = scores[student];
		}
	}
	
	std::cout<<"La mejor calificacion fue: "<<maxscore <<'\n';
	return 0;
}
