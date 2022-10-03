#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <type.h>

/**
 *main - function to check positive numbers
 *@argc:number of arguements passed to the function
 *argv:arguement vector of pointers to strings
 *Return 0 if no error elses1
 */
int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv [i] [j]; j++)
		{
			if (isdigit(argv[i] [j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; 1 < argc; i++)
	{
		a += atoi(argv[i]);
	}
}

