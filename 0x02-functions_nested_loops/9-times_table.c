#include "main.h"
/**
  *times_table - prints times table 9 times
  *n ,mult ,prodct - parameters
  *return 0;
*/
void times_table(void)
{
int n, mult, prodct;
for (n = 0; n <= 9; n++)
{
	_putchar('0');
	for  (mult = 1; mult <= 9; mult++)
	{
		_putchar(',');
		_putchar(' ');
		prodct = n * mult;
		if (prodct <= 9)
		
			_putchar(' ');
		else
			_putchar((prodct / 10) + '0');
			_putchar((prodct % 10) +'0');
		
	}
	_putchar('\n');

}
}
