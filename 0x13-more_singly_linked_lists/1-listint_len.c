#include "lists.h"

/**
*listint_len - returns number  of elemtns in a linked list
*@h: pointer  to  linked list
*Return: number of elemtns in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
