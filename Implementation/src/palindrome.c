# include <stdio.h>

int palindrome(int originalNumber)
{
	int duplicateNumber = originalNumber;
	int reverseNumber = 0;
	int palindromeFlag = 0;
	while(duplicateNumber > 0)
	{
		int digit = duplicateNumber % 10;
		reverseNumber = reverseNumber * 10 + digit;
		duplicateNumber /= 10;
	}
	if(reverseNumber == originalNumber)
	{
		palindromeFlag = 1;
	}
	return palindromeFlag;
}

