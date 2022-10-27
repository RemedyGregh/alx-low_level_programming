#include "lists.h"

/**
* add_nodeint - Adds a node at the begining of a list
* @head: Pointer pointing to first element/node in a linked list
* @n: data element to initialize new node with
*
* Return: Address of new node or NUll if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
