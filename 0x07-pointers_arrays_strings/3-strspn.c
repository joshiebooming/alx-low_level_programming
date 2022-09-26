#include "main.h"

/**
*_strspn -  gets the length of a substring
*@s: this the string to be checked
*@accept:  string to check against
*Return: number of bytes  of s in accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, m;

	for (l = 0; s[l]; l++)
	{
		for (m = 0; accept[m]; m++)
		{
			if (s[l] == accept [m])
				break;
		}
		if (!accept[m])
			break;
	}
	return (l);
}


