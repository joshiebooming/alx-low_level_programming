#include <stdio.h>
#include "main.h"

/**
*puts2 -prints out the characters
*@str: stringg
*Return: 0
*/

void puts2(char *str)
{
	int i = 0;
	
		while (*(str+1) != '\0')
		{
			if ( 1 % 2 == 0)
				putchar(*(str + 1));
			i++;
		}
		putchar(10);
}

