#include <stdli.h>
#include "main.h"

/**
*malloc_checked-allocates memory using malloc
*@b : memory to be allocated
*return: pointer  to allocate memory
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
}
