#include "main.h"
/**
  *print_to_98 - prints numbers either n < 98 or
  *n > 98
  *@ n - numbers to be printed
  *Return (0)
**/
void print_to_98(int n)
	if (n >= 98)
{
	while(n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
}
	else
{
	while(n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
}
}
