#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - creates a space in memory which contains the string parsed as argum
* @str: String to be put inside a dynamic memory
*
*Return: A pointer to the newly allocated space in memory
*/
char *_strdup(char *str)
{
	char *mySpace;
	unsigned int size = 0;
	unsigned int i = 0;

	/**
	* To get the size of the string passed as an argument
	*/
	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	mySpace = malloc(sizeof(*mySpace) * size + 1);
	/**
	* the plus 1 above is just adding the null terminbator
	*/

	if (mySpace == NULL)
		return (NULL);
	while (i < size)
	{
		mySpace[i] = str[i];
		i++;
	}
	mySpace[i] = '\0';
	return (mySpace);
}
