#include "lists.h"

/**
*reverse_listint - reverse a listint
*@head: double pointer to start of list
*Return: point to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous  = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
