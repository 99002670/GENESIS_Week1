# include <stdio.h>
# include "factorial.h"
# include "magic.h"
# include "perfect.h"
# include "armstrong.h"
# include "prime.h"
# include "palindrome.h"
# include "neon.h"


int main(void)
{
	int choice;
	do
	{
		printf("\n\n1. Factorial\n");
		printf("2. Perfect\n");
		printf("3. Armstrong\n");
		printf("4. Prime\n");
		printf("5. Magic\n");
		printf("6. Palindrome\n");
		printf("7. Neon\n");
		printf("8. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		int number;
		switch(choice)
		{
			case 1:
				printf("Enter a number: ");
				scanf("%d", &number);
				printf("Factorial of %d is %d\n", number, factorial(number));
				break;
			case 2:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(perfect(number))
				{
					printf("%d is a perfect number\n", number);
				}
				else
				{
					printf("%d is not a perfect number\n", number);
				}
				break;
			case 3:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(armstrong(number))
				{
					printf("%d is an armstrong number\n", number);
				}
				else
				{
					printf("%d is not an armstrong number\n", number);
				}
				break;
			case 4:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(!prime(number))
				{
					printf("%d is a prime number\n", number);
				}
				else
				{
					printf("%d is not a prime number\n", number);
				}
				break;
			case 5:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(magic(number))
				{
					printf("%d is a magic number\n", number);
				}
				else
				{
					printf("%d is not a magic number\n", number);
				}
				break;
			case 6:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(palindrome(number))
				{
					printf("%d is a palindrome number\n", number);
				}
				else
				{
					printf("%d is not a palindrome number\n", number);
				}
				break;
			case 7:
				printf("Enter a number: ");
				scanf("%d", &number);
				if(neon(number))
				{
					printf("%d is a neon number\n", number);
				}
				else
				{
					printf("%d is not a neon number\n", number);
				}
				break;
			case 8:
				printf("\nThank you\n");
				break;
			default:
				printf("***Invalid Input***\n");
				break;
		}
	}while(choice != 8);

	return 0;
}


