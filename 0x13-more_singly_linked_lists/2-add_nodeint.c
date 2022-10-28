#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node 
 *@head:double pointer to the beginning
 *Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listsint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
