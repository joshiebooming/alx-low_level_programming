#include "list.h"

/**
 *list_len  - finds number of elements in linked lists
 *@h: pointer to start of linked list
 * return: number of elements in likned lists
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}

