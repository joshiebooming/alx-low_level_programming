#include <stdio.h>

/**

 * main - print all alphabets except e and q

 * Description: using the main function

 * this program outputs "abcdfghijklmnoprstuvwxyz"

 * Return: 0

 */

int main(void)

{

char z;

for (z = 'a' ; z <= 'z' ; z++)

{

if (z != 'e' && z != 'q')

{

	putchar(z);

}

}

putchar('\n');

return (0);

}

