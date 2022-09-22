#include "main'h"

/**
 * _strncpy - C function that copies a string including
 * the terminating null byte
 * @dest: buffer storing the copied string
 * @src: the source string
 * @n: max number of byte copied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[i] = src[i];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
