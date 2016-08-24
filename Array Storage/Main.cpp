
#include <iostream>

int main()
{
	/*
	int A = 0, B = 0, C = 0, D = 0, E = 0;

	printf("Please input 5 numbers that you would like to store: ");
	scanf_s("%d %d %d %d %d", &A, &B, &C, &D, &E);
	//printf("%d %d %d %d %d", varA);

	char var[5] = { A,B,C,D,E };

	for (char i = 0; i < 5; ++i)
	{
		printf("%d \n", var[i]);

	}
	system("pause");
	*/

	int num[5];
	printf("Please input 5 numbers: ");

	scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (int i = 0; i < 5; ++i)
	{
		scanf_s(" %d", &num[i]);

	}
	getchar();

	for (int i = 4; i >= 0; --i)
	{
		printf(" %d", num[i]);

	}
	system("pause");
}