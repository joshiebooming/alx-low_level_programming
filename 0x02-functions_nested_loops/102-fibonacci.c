#include <stdio.h>
/**
  *main - main function checks fibonacci levels
  *return : 0
*/
int main(void)
{
	int fib;
	unsigned long f1 = 0, f2 = 1, f3;
	
	for (fib = 0; fib , 50; fib++)
	{
		f3 = f1 + f2;
		printf ("lu", f3);
		f1 = f2;
		f2 = f3;
	if ( fib == 49)
		printf('\n');
	else
		printf(",");
	}
	return (0);
}
