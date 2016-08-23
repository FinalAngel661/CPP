//
// Programmer Kelsey Davis
//

#include <iostream>

int main()
{
	printf("What de ell is going on ere? \n BREKFEST! \n");

	/*
		Variable definition
		I'm asking the computer for memory
		this memory will be used for interger math
		I've given this variable the alias 'var'
	*/
		int var; // var is uninitialized
		int var1;
		int var2;
	
	/*
		Variable assignment and initialization
		I'm using the literal value '12'
		and assigning into my variable
		first assignment is an initialization
	*/
		var = 55.5;
		var1 = 655;
		var2 = 00.1;

	/*
		Variable Instantiation
		When you define and intialize at the same time
	*/
		int ivar = var + 4;
		int dvar = var * var1;
		int avar = var + dvar * var2;
	
	/*
		whereas printf prints information to the console, scanf reads information.
		it works the same way, only the variables we are copying into need 
		to be passed in using the 'address-of' operator: & MORE ON THIS LATER.
	*/

		printf("\n %d", ivar);
		printf("\n %d", dvar);
		printf("\n %d", avar);
		printf("\n %d", (2 / 3 + 3 / 5));
		printf("\n %d", (2 % 3 + 3 % 5));
		printf("\n %d", (23 % 15 % -2));
		printf("\n %d", (25 * 1.0 / 2));
		printf("\n %d", (25 * 1 / 2));
		printf("\n %d", (25 * (1 / 2)));
		printf("\n %d", (235 / 8.0 + 7));
		printf("\n %d", (235 / 8 + 7));
		printf("\n %d", ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2);
		//scanf("%f", var);
		scanf_s("&f", &var);
		printf("%f %d \n", var, ivar);
		getchar();

	/*
		Problem 2:

		suitable variable names for...

		A) Ave_H
		B) Var TaxA
		C) Var TaxB
		D) Var TotSL
	*/


}