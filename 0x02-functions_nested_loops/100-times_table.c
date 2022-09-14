#include "main.h"
/**
  *print_times_table -checks and prints timetable with parameter
  *@n: -the character
  *Return:0
**/
void print_times_table(int n)
{
	int dgt, prod, result;
	if (n >= 0 && n <= 15)
	{
		for (dgt = 0; dgt <= n; dgt++)
		{
			_putchar('0');

		for (prod = 1; prod <= n; prod ++)
		{
			_putchar(',');
			_putchar(' ');
			result = dgt * prod;
		if (result <= 99)
			_putchar(' ');
		if (result <= 9)
			_putchar(' ');

		if (result >= 100)
		{
			_putchar((result / 100) + '0');
			_putchar((result / 10) % 10 + '0');
		}
		else if (result <= 99 && result >= 10)
		{
			_putchar((result / 10) + '0');
		}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
