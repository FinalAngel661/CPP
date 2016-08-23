

#include <iostream>

/*
	


*/

int main()
{	
	int varA = 0, varB = 0;
	int varC = 0;
	//printf("Var currently stores: %d \n", var);
	printf("Insert two intergers: ");
	scanf_s("%d %d", &varA, &varB); // assign var a value from console
	varC = varA;
	printf("A: %d, B: %d \n", varA, varB);
	getchar();
	//Swap the values here
	varA = varB;
	varB = varC;

	printf("Swap successful!");
	printf("A: %d, B: %d \n", varA, varB);
	getchar();
	getchar();



}