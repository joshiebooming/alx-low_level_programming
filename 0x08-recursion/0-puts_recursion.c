#include "main.h"
/*
*_puts_recursion - checks and prints string folowed by new line
*@s : string to be called
*Return : void null
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
