# include <stdio.h>

int neon(int number)
{
	int sum = 0;
	int neonFlag = 0;
	int square = number * number;
	while(square > 0)
	{
		int digit = square % 10;
		sum += digit;
		square /= 10;
	}
	if(sum == number)
	{
		neonFlag = 1;
	}
	return neonFlag;
}

