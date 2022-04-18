#include "main.h"

/**
 * _puts - a function that prins a string
 * @str : string to be printed
 *
 * Return : nothing
 */
void _puts(char *str)
{
	char st[] = *str;
	int i = 0;

	while (*str != '\0')
	{
		_putchar(st[i]);
		str++;
		i++;
	}
	_putchar('\n');
}


