
#include <iostream>

int main()
{
	/*
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
	*/

	float input[10];
	float smallest, largest;

	printf("Input 10 values: ");

	for (int i = 0; i < 10; ++i)
	{
		scanf_s(" %d", &input[i]);

		if (i == 0)
			smallest = largest = input[i];

		if (input[i] > largest)
			largest = input[i];

		
	}
	printf("Largest: %f and the smallest: %f\n");
	system("pause");

}

