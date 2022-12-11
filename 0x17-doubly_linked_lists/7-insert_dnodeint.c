#include "lists.h"

/**
* insert_dnodeint_at_index - inserts node at a given index
* @h: Pointer holding address of first node in list
* @idx: index to insert node in list
* @n: integer element to create node with
*
* Return: address of newly inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (count == idx && idx != 0)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
