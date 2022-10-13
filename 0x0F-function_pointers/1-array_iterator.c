#include "function_pointers.h"

/**
* array_iterator - searches for an integer
*@array:array to search through
*@size:size
*@action:function
*
*Return:fix index
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
