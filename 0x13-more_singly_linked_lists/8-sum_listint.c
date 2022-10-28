#include "lists.h"

/**
*sum_listint - returns sum
*@head: pointer to first node in the list
*Return: sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum  = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
