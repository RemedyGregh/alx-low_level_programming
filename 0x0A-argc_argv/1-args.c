#include <stdio.h>

/**
* main - C program that prints the number of srguments passed into it
* @argc: Int argument of number of arguments passed to main
* @argv: Pointer to char argument of array of strings
* Return: O success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
