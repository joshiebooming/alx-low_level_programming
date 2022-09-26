#include "main.h"

/**
*_memcpy - this function copies a memory areas
*@dest: this this the memory to be copied to
*@src: memory to be copied from
*@n: the number of bytes to be copied
* Return: reurns a pointer 
 **/

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int j = 0;

	for (; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

