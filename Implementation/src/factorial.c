# include <stdio.h>

int factorial(int number)
{
	int product = 1;
	for(int iterator = number; number > 0; iterator -= 1)
	{
		product *= number;
		number -= 1;
	}
	return product;
}

