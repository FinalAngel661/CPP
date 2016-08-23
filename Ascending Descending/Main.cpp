
#include <iostream>

int main()
{
	int in1 = 0;
	int in2 = 0;
	int in3 = 0;
	int in4 = 0;
	int in5 = 0;

	printf("Please input 5 numbers: ");
	scanf_s("%d %d %d %d %d", &in1,1, &in2,1, &in3,1, &in4,1, &in5,1);

	int sum = (in1 + in2 + in3 + in4 + in5);
	bool sum = true;


	if (sum == true)
	{
		printf("%d > %d > %d > %d > %d");
	}

}