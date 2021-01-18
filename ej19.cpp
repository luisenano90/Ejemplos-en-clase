#include <iostream>

int main()
{
	constexpr int numrows{10};
	constexpr int numcols{10};
	int product[numrows][numcols]{};
	
	for (int row{1}; col < numcols; ++row)
	{
		for (int row{1}; col < numcols; ++cols)
		{
			product[row][col] = row * col;	
		}
		
	}
	for (int row{1};row<numrows;++row)
	{
		
		for(int col{1};col<numcols;++col)
		{
			std::cout<<product[row][col]<<'\t';
		}
		std::cout<<'\n';
	}
	return 0;
}
