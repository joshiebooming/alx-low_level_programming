#include "lists.h"

/**
 *print_dlistint - print the  ents in the doubly linked lists
 *@h:double linked list
 *Return : number of elements inside doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);
	/*find the first element*/
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node += 1;
	}
	return (node);
}
