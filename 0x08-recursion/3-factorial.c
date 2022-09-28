#include "main.h"
/*
* factorial - returns  factorial of agiven number
*@n: variable parametere
* return : n* (n-1)
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (n * factorial(n - 1));
}
