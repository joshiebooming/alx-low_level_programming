#include <stdio.h>
/*
 * main - print the string in the main function
 *
 * Descriptin - using the main function
 * this program prints  prints the size of various types on the computer it is compiled and run on
 * Return 0
 */
int main (void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of long int: %ld byte(s)\n" sizeof(li));
	printf("size of long long int: %ld bytes(s)\n" sizeof(lli));
	printf("size of float: %ld bytes(s)\n" sizeof(f));
	return (0);
}
