#include  "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a listint
 *@head: pointer to beginning of list
 *Return: void
 */
void free_listint(listint_t *head);
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
