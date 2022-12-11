#include "lists.h"

/**
* add_dnodeint_end - adds node at the end of a list
* @head: pointer variable to hold the addres of the first node in list
* @n: Integer element to create new list with
*
* Return: Adress of new node or NULL (failure)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->next = NULL;
		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);
}
