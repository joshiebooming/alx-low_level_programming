#include "main.h"

/**
* _puts - main function that puts
*@str: - parameter
*Return: 0
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
