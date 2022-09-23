#include "main.h"

/**
 *string_toupper - changes all lowercase letters to uppercase
 *@str: string to be changed
 *Return: address to the string
**/

char *string_toupper(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (str[z] >= 'a' && str[z] <= 'z')
			str[z] -= 32;
		z++;
	}
	return (str);
}
