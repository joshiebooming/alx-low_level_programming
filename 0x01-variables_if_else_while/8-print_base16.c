#include <stdio.h>
/*
 * this program prints hexadecimal in lowercase
 * followed by new line
 * return 0;
 * the output should be "0123456789abcdef'
 */
int main(void)
{
	char c;
	for (c ='0'; c <='9'; c++)
	{
		putchar (c);
		for (c = 'a'; c <='f'; c++)
			putchar (c);
	}
 	putchar (\n);
	return 0;
}

