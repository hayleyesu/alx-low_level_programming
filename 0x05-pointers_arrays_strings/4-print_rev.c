#include "main.h"
#include <string.h>

/**
 * print_rev - a function which prints a given string in reverse order
 * @s : string to be reversed
 *
 * Return : nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}

	_putchar('\n');
}
