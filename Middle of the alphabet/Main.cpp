
#include <iostream>

int main()
{
	/*
	printf("Enter 2 letters in the alphabet to find the middle letter between them.\n");
	
	if
	{

		char a, b;
		scanf_s("%c %c", &a, 1, &b, 1);
		getchar();

		int middle = (a + b) / 2;

		printf("The middle letter is: %c", middle);
		getchar();

		else
		{
			char A, B;
			scanf_s("%c %c", &A, 1, &B, 1);
			getchar();

			int middle = (A + B) / 2;

			printf("The middle letter is: %c", middle);
			getchar();

		};;
*/	
	
	/*
	printf("Enter 2 letters in the alphabet to find the middle letter between them.\n");
	char a, b;
	scanf_s("%c %c", &a, 1, &b, 1);
	getchar();

	int middle = (a + b) / 2;

	printf("The middle letter is: %c", middle);
	getchar();
	system("pause");
	*/
	

	/*
	char ch = 0;
	scanf_s("%c", &ch,1);
	int ival = ch;
	printf("%d\n", ival);
	getchar();
	system("pause");
	*/

	/*
	printf("Please input two letters: ");
	char in1, in2;
	int median;
	scanf_s("%c %c", &in1, 1, &in2, 1);
	getchar();

	in1 = (in1 - 65) % 32 + 65;
	in2 = (in2 - 65) % 32 + 65;

	median = (in1 + in2) / 2;
	printf("%c is in between %c and %c", median, in1, in2);
	getchar();
	system("pause");
	*/


	/*
		A   B  C  D
		65 66 67 68
		0  1  2   3
		0  1  2   3
	%32 0  1  2   3
	
		a  b  c   d
		97 98 99 100
		32 33 34 35
	%32 0   1  2  3

		a % 32


	*/
}
