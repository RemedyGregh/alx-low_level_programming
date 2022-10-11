#include <stdio.h>
#include "dog.h"

/**
* init_dog - Function to initialize a variable of type struct dog
* @d: struct argument
* @name: char argument
* @age: float argument
* @owner: char argument
*
* Return: Nothin
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
