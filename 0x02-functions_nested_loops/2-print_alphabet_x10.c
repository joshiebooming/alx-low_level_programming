#include "main.h"
/**
  * main - print lowercase alphabets 1oX
  * return always (0);
  */

void print_alphabet_x10(void) /* from main.h*/

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
