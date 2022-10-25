#include <stdlib.h>
#include "lists.h"

/**
 *free_list - frees a list_t list
* @head: pointer to start of list
*return: void
*/
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
