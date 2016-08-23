
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
	
	printf("Enter 2 letters in the alphabet to find the middle letter between them.\n");
	char a, b;
	scanf_s("%c %c", &a, 1, &b, 1);
	getchar();

	int middle = (a + b) / 2;

	printf("The middle letter is: %c", middle);
	getchar();
	system("pause");
	
	

	/*
	char ch = 0;
	scanf_s("%c", &ch,1);
	int ival = ch;
	printf("%d\n", ival);
	getchar();
	system("pause");
	*/
}
