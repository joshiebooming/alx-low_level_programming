#include <stdio.h>

/**

 * main - print if the number is postive, zero, or negative

 *

 * Description: using the main function

 * this program prints "Programming is positive, zero, or negative

 * Return: 0

 */

int main(void)

{

char d;

for (d = 'a' ; d <= 'z' ; d++)

{

if (d != 'e' && d != 'q')

{

	putchar(d);

}

}

putchar('\n');

return (0);

}

