#include "lists.h"

/**
* free_listint - Function to delete a singly linked list
* @head: Pointer to first node of list
*
* Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
