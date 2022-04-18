#include "main.h"

/**
 * print_rev - a function which prints a given string in reverse order
 * @s : string to be reversed
 *
 * Return : nothing
 */
void print_rev(char *s)
{
	int i,j;
	int count = 0;
	char str[100] = *s;
	char rev[100];
	
	while (str[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for(i = 0;i < count;i++)
	{
		rev[i] = str[j];
		j--;
	}
}
