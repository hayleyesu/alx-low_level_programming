#include "main.h"

/**
 * _putes - a function that prins a string
 * @str : string to be printed
 *
 * Return : nothing
 */
void _puts(char *str)
{
	char st = *str;

	while (*str != '\0')
	{
		_putchar(st);
		str++;
	}
	_putchar('\n');
}


