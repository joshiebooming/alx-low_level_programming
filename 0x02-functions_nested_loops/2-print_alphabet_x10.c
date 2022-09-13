#include "main.h"
/**
 * main - print lowercase alphabets 1oX
 *description -for loop 2
 * return always (0);
 *for loops
 */
void print_alphabet_x10(void)
{
	int x;
	int y;
for (x = 0; x < 10; x++)
	{
	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
		_putchar('\n');
	}
}
