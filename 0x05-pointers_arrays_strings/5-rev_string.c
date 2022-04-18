#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s : a string to be reversed
 *
 * Return : nothing
 */
void rev_string(char *s)
{
	int count = 0;
	
	while (*s != '\0')
	{
		count++
		s++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
}

