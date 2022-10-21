#include "lists.h"

/**
* list_len - To get no of elements in a list
* @h: Pointer to list or first node in list
*
* Return: Number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
