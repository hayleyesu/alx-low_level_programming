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
	int len = strlen(*s);
	int i;

	for(i = len - 1;i >= 0;i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
