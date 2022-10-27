#include "lists.h"

/**
* listint_len - Returns number of elements in a linked list
* @h: Pointer to first node in list
*
* Return: Number of nodes/elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
