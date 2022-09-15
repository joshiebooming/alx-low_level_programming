#include "main.h"
/**
 *_isdigit - checks if c is a digit
 *@c : parameter getting checked
 *Return : returns either 1 or 0
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
