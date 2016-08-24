
#include <iostream>

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
