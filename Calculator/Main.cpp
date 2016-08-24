

#include <iostream>

int main()
{

	int lhs = 0, rhs = 0, result = 0;

	/*
	int in1 = 0;
	int in2 = 0;
	int sum = (in1 + in2);
	int sub = (in1 - in2);
	int multi = (in1 * in2);
	int div = (in1 / in2);
	*/

	char op = '+';
	/*
	char op1 = '0';
	char op2 = '-';
	char op3 = '*';
	char op4 = '/';
	*/

	printf("Please input 2 numbers and an operation: ");
	scanf_s("%d %c %d", &lhs, &rhs, &result);

	switch (op)
	{
	case 'op1':
		printf("The answer is %d \n", sum,1);
	case 'op2':
		printf("The answer is %d \n", sub,1);
	case 'op3':
		printf("The answer is %d \n", multi,1);
	case 'op4':
		printf("The answer is &d \n", div,1);
	default:
		break;

	}
	system("pause");


}