#include <stdio.h>

/**
 *  main - main block, solve fizz buzz from numbers 1 to 100
 *
 *  Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 *  Multiples of both 3 and 5 should print FizzBuzz
 *
 *  Return: 0
 */

int main(void)
{
	int m;

	for (m = 1 ; m < 100 ; m++)
	{
		if ((m % 3) == 0 && (m % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", m);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
