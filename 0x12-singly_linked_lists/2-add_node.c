#include "lists.h"

/**
* add_node - Function to add new node at the begining of the list
* @head: Pointer pointing to first node in list
* @str: Data elemnt to initialize new node
*
* Return: Pointer to new node/element
*/
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);

	*head = new_node;
	return (*head);
}
