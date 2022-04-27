#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;
	len = len + 1;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (len);
}

