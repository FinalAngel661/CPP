
#include <iostream>


int main()
{
	int in1 = 0;
	int in2 = 0;

	printf("Please input 2 numbers: ");
	scanf_s("%d %d", &in1, &in2);

	if (in1 > in2)
	{
		printf(" %d ", in1);

	}
	else if (in1 < in2)
	{
		printf(" %d ", in2);

	}
	else if (in1 == in2)
	{
		printf("you can't enter the same number!\n");

	}
	system("pause");
}
