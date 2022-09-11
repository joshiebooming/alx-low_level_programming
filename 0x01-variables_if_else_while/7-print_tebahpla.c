#include <stdio.h>
/*
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Description -using the main function
 * this program prints alphabets backwards
 * return 0;
 */
int main (void)
{ char c;
	for (c ='z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');		
	return (0);

}
