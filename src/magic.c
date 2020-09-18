# include <stdio.h>

int magic(int number)
{
	int sum = 0;
	int magicFlag = 0;
	while(number > 0 || sum > 9)
	{
		if(number == 0)
		{
			number = sum;
			sum = 0;
		}
		int digit = number % 10;
		sum += digit;
		number /= 10;
	}
	if(sum == 1)
	{
		magicFlag = 1;
	}
	return magicFlag;
}
	

