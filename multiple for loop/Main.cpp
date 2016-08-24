#include <iostream>
/*
int main()
{
	for (int i = 0; i <= 100; ++i)
	{
		
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			printf("%d", i);
		}
		else 
		{
			(i % 3 == 0); printf("Fizz");
			(i % 5 == 0); printf("Buzz");
		}
			
			printf("\n");

			if (i % 15 == 0)
			{
			printf("FizzBuzz\n");
			}
			


	
		
	}
	system("pause");
}
*/

int main()
{
	int sum = 0;
	for (int i = 0; i < 1000; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;

		}
		printf("%d", sum);
		
	}
	system("pause");
}
