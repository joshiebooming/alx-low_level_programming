#include "main.h"

/**
*_memset -fills memory block with a constant byte
*@s: this is the address to  the memory block
*@b: this the char to be used
*@nn: this is the number of bytes to be used
*Return: this s the pointer to the memory block
**/
char *_memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s[n -1] = b;
		n--;
	}
	return (s);
}
