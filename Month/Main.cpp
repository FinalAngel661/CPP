
#include <iostream>

int main()
{
	int month = 0;
	int days = 0;

	printf("Input a number, 1-12, corresponding to a month: ");
	scanf_s("%d", &month);
	getchar();



	switch (month)
	{
	case1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	}
	system("pause");

}