#include "lists.h"

/**
* sum_listint - Sums up all data in the list
* @head: Pointer to first node in list
*
* Return: Sum of all data in list
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
