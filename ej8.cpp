namespace Studentsnames
{
	enum Studentsnames
	{
		kenny,
		kyle,
		stan,
		butters,
		cartman,
		wendy,
		max_students
	}
}

int main()
{
	int testcores[studentsnames::max_students]{};
	testcores[studentsnames::stan] = 76;
	return 0;
}
