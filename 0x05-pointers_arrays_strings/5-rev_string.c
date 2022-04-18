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
	char str[100] = *s;
	int i,j;
	char rev[100];
	while (str[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for(i = 0; i < count;i++)
	{
		rev[i] = str[j];
		j--;
	}
}
