
#include <iostream>

int main()
{
	/*
	if (true)
	{
		printf("Do once\n");

	}
	*/

	/*
	int health = 100;
	while (health > 0)
	{
		health = health - 2;
		printf("current Health:  %d", health);

	}
	*/
	/*
	for (int i = 0; i < 10; ++i)
	{
		if (i > 4)
		{
			break;
		}

		std::cout << i << std::endl;

	}
	*/

	int x = 0;
	for (int i = 0; i < 100000; ++i)
	{
		for (int j = 0; j < 100000; ++j)
		{
			for (int k = 0; k < 10000; ++k)
			{
				x++;
				x++;

			}
		}
		
	}
	printf("%d", x);
	system("pause");

}