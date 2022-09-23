#include "main.h"
/**
*_strncat-concatanates two strings
*@dest: - this is the string to append on
*@src: string to be completed at end of dest
*@n : this the parameter we will compare the index to
*Return: returns new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int ind = 0, dest_ln = 0;

	while (dest[ind++])
		dest_ln++;
	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_ln++] = src[ind];
	return (dest);
}


