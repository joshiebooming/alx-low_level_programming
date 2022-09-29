#include "main.h"
/*
* factorial -function that returns factorialof agiven number
*@n: variable parametere
* return : n* (n-1)
*/

int factorial(int n)
{
	int newfac;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	newfac = factorial(n - 1);
	return (n * newfac);

}
