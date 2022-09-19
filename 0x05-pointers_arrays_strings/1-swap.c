#include "main.h"
/**
*swap_int-checks and  swaps value of two intergers
*@a: - parameter 1
*@b: -parameter 2
*return: 0
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
