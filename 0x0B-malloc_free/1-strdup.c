#include "main.h"

/**
*_strdup - returns pointer to newly allocated
*space in memory which contains copy of string
*string as a  given parameter
*@str: to be copied
*Return:NULL in case of error pointer to be allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}
	cpy[len] = '\0';

	return (cpy);
}

