#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*
 * main - main function passs arguements
 *argc : counts arguements
 *argv: the arguements
 * return : 0 otherwise 1
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
	}
	printf("error\n");
	return (1);
}


