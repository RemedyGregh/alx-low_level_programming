#include "lists.h"

/**
* pop_listint - Deletes first nodde of the list
* @head: Pointer pointing to first node to be deleted
*
* Return: Value of the first node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || !head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
