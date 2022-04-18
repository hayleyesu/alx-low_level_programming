#include "main.h"

/**
 * puts2 - prints string by jumping one charactor
 * @str : string to be print
 * Return : nothing
 */

void puts2(char *str)
{
	int i;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
