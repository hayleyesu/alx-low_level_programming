#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: a tring to be reversed
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
