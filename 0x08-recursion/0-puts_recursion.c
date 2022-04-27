#include "main.h"

/**
 * _puts_recursion - prints string
 * Return : nothing
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
	}
	printf("%s",_puts_recursion());
		s++;
}
