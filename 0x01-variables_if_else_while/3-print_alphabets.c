#include <stdio.h>

/**
 *
 * main - print if the number is postive, zero, or negative
 * Description: using the main function
 *
 *this program prints prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0
 *
 *       */

int main(void)

{

	char sh;

	for (sh = 'a' ; sh <= 'z' ; sh++)

	{

			putchar(sh);

	}

	for (sh = 'A' ; sh <= 'Z' ; sh++)

	{

			putchar(sh);

	}

	putchar('\n');

	return (0);

}


