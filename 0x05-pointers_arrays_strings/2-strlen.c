#include "main.h"
/**
*_strlen -returns length of a string
*@s: parameter
*return: 0
*/
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
	len += 1;
	}
	return (len);
}
