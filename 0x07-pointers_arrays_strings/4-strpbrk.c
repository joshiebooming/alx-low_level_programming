#include "main.h"

/**
*_strpbrk -searches string for any of the set bytes
*@s: this is the string to check
*@accept: this is the string to check against
*Return: pointer to byte in s matches if no
*matchreturn NULL
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, p;

	for (k = 0; s[k]; k++)
	{
		for (p = 0; accept[p]; p++)
		{
			if (s[k] == accept[p])
				break;

		}
		if (accept[p])
			return (s + k);
	}
	return (0);
}
