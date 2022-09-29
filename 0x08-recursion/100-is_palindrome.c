#include "main.h"
/*
*is_palindrome : function that checcks and returns palindrome
*@s: string to be checked
*return: 1 if yes  0 otherwise
*/
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
*check - checks if string is palindrone
*@s: - string to be checked
*@start : start index
*@end : end index
*@flag:index to be  flagged
*return:(0)
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
/**
*_strlen_recursion -calculates length of a  string
*@s: string to be used
*Return: lenth of the string
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

