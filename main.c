# include <stdio.h>
# include "factorial.h"
# include "magic.h"
# include "perfect.h"
# include "armstrong.h"
# include "prime.h"

int main(void)
{
	int choice;
	do
	{
		printf("1. Factorial\n");
		printf("2. Perfect\n");
		printf("3. Armstrong\n");
		printf("4. Prime\n");
		printf("5. Magic\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a number: ");
				int number;
				scanf("%d",&number);
				printf("Factorial of %d is %d",&number,&factorial(number));
				break;
			case 2:
				printf("Enter a number: ");
				int number;
				scanf("%d",&number);
				if(perfect(number))
				{
					printf("%d is a perfect number",&number);
				}
				else
				{
					printf("%d is not a perfect number",&number);
				}
				break;
			case 3:
				printf("Enter a number: ");
				int number;
				scanf("%d",&number);
				if(armstrong(number))
				{
					printf("%d is an armstrong number",&number);
				}
				else
				{
					printf("%d is not an armstrong number",&number);
				}
				break;
			case 4:
				printf("Enter a number: ");
				int number;
				scanf("%d",&number);
				if(prime(number))
				{
					printf("%d is a prime number",&number);
				}
				else
				{
					printf("%d is not a prime number",&number);
				}
				break;
			case 5:
				printf("Enter a number: ");
				int number;
				scanf("%d",&number);
				if(magic(number))
				{
					printf("%d is a magic number",&number);
				}
				else
				{
					printf("%d is not a magic number",&number);
				}
				break;
			default:
				printf("***Invalid Input***");
				break;
		}
	}while(ch != 6);

	return 0;
}


