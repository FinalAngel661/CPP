
#include <iostream>

int main()
{

	printf("Input a interger a float and a character: ");
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cin >> f >> i >> ch;
	std::cin >> ch >> i >> f;
	std::cin >> ch >> f >> i;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
	getchar();
	//printf(" int: %d, float: %d , Char: %ch ");

	getchar();
	getchar();

}