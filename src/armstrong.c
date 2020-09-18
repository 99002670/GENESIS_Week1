# include <stdio.h>

int armstrong(int originalNumber)
{
	int duplicateNumber = originalNumber;
	int sum = 0;
	int armstrongFlag = 0;
	while(originalNumber > 0)
	{
		int digit = originalNumber % 10;
		sum += digit * digit * digit;
		originalNumber /= 10;
	}
	if(duplicateNumber == sum)
	{
		armstrongFlag = 1;
	}
	return armstrongFlag;
}



