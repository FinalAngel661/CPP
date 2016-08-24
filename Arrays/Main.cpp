
#include <iostream>

/*
int main()
{
	int var1, var2, var3;
	var1 = 1;
	var2 = 0;
	var3 = 45;

	// there are no 'variable length arrays' in C++ on the st
	int vara[3] = {1, 0, 45};

	vara[0] = 1;
	vara[1] = 0;
	vara[2] = 45;

	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n", vara[i]);
	}
	system("pause");
}
*/

int main()
{
	//only for instantioation
	//define and initialize at the same time
	int vara[10] = {3, 4, 4+5};
	//defining the array,
	int varb[10];

	float var[10];
	bool var[10];

	int var[10][10]; // 10* 10 elements

	int dvar[100];

	var[6][0] = 0;
	
	int dailycaloriecounter[4][7];

	dailycaloriecounter[0][0] = 5550;//first sunday
	dailycaloriecounter[1][0] = 4500;// second sunday

	int chessboard[8][8];

	/*
		
	
	
	*/

	for (int i = 0; i < 10; ++i)
	{
		vara[i] = varb[i];

	}

	//print all values in vara
	for (int i = 0; i < 10; ++i)
	{
		vara[i * 2] = 20;
		printf("%d ", vara[i*2]);

	}

	//range based for-loop
	/*
	for (int val : vara)
	{
		printf("%d ", val);

	}
	*/

	system("pause");

}