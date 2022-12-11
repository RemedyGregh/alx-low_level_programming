#include "lists.h"

/**
* add_dnodeint - Adds a node at the beginning of a list
* @head: node pointer to hold the address of the first node in list
* @n: Integer element to initialize new node with
*
* Return: Adress of the new elemnt inserted
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
