#include "main.h"
#include <stdio.h>

/**
*main - main function
*@argc:-count arguements
*@argv: passes string arguements
*return - 0
*/
int main(int argc, char *argv[])
{
	int i = 0
	if (argc > 0)
	{
	while (i < argc)
	{
		printf("%s\n", argv[i]);

	i++;
	}
	}
	return (0);
}
