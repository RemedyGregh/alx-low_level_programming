#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change for money
* @argc: Number of arguments to take of type Int
* @argv: Vector argument of strings
* Return: 0 Success
*/
int main(int argc, char *argv[])
{
	int num, result, j;
	int coins[] = {25, 10, 5, 2, 1};

	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
	}
	else if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}

