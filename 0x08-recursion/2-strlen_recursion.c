#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string input
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len);
}

