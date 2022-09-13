#include "main.h"
/**
  * _isalpha - checks if c is a letter lower case or upper case
  * @c: is a character
  * Return: - either or 0 depending on condition
*/

int _isalpha(int c)
{
	return ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'));
}
