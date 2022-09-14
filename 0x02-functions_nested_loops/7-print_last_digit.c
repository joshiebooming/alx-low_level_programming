#include "main.h"
/**
  *print_last_digit - checks last digit
  *@n: -charater to be passed
  *Return: -value of x the last digit
  **/
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
