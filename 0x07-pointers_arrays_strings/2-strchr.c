#include "main.h"

/**
*_strchr -locates characters in a string
*@s: this is a string to check
*@c: this is the character to be checked for
*Return:pointer to spot in s with c or null
*/
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j); j++)
	{
		if (*(s + j) == c)
			return (s  + j);
	}
	if (*(s  + j) == c)
		return (s + j);
	return (0);
}
