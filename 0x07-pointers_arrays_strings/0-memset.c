#include "main.h"
/**
 * _memset - fills the memory with constand bytes
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
