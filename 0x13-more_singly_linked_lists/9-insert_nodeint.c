#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at any given position
* @head: Pointer pointing to first node of list
* @idx: index of list where new node should be added
* @n: data element to initialize new node with
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	size_t count;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
