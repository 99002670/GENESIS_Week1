# include <stdio.h>

int perfect(int number)
{
	int perfectFlag = 0;
	int sum = 0;
	for(int iterator = 1; iterator <= number / 2; iterator += 1)
	{
		if(number % iterator == 0)
		{
			sum += iterator;
		}
	}
	if(sum == number)
	{
		perfectFlag = 1;
	}
	return perfectFlag;
}	


