
#include <iostream>

int main()
{
	int choice = 0;
	printf("Please input a number that is 1 - 4: ");
	scanf_s("%d", &choice);


	switch (choice)
	{
	case 0:
		std::cout << "1";
		break;
	case 1:
		std::cout << "2 or 3";
		break;
	case 2:
		std::cout << "4";
		break;
	default:
		break;

	}
	system("pause");


}