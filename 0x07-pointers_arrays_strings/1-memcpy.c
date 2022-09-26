#include "main.h"

/**
*_memcpy - this function copies a memory areas
*@dest: this this the memory to be copied to
*@src: memory to be copied from
*@n: the number of bytes to be copied
* Return: reurns a pointer
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

