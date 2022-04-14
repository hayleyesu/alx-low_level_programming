#include "main.h"

/**
 * print_line - prints a line using _
 * print \n when n = 0 or n < 0
 * Return: null
 */

void print_line(int n)
{
	for(int i = n;i > 0; i--)
	{
		_putchar('_');
	}
}
