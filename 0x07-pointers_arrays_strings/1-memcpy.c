#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 * @n: size of bytes to be copied
 *
 * Return: function to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
