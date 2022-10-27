#include "lists.h"

/**
* print_listint - Prints all elements/node of a singly linked list
* @h: Pointer to first node in list
*
* Return: Number of nodes in list
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
