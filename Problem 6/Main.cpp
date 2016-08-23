
#include <iostream>

int main()
{
	
	int var1 = 0, var2 = 0, var3 = 0, var4 = 0, var5 = 0;
	printf("Input five intergers to find the mean.");
	scanf_s(" %d, %d, %d, %d, %d \n", &var1, &var2, &var3, &var4, &var5);
	int avg = (var1 + var2 + var3 + var4 + var5) / 5;
	printf("The mean is: %d\n", avg);
	system("pause");
	getchar();


}