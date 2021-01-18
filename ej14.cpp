int scores[]{84,92,76,81,56};
int numstudents{static_cast<int>(std::size(scores))};
int totalscore{0};

for (int student{0};<numstudents; ++student)
	totalscore +=scores[student];
	
	auto averagescore{static_cast<double>(totalscore)/numstudents};
