#include <main.h>

/**
 * _strcat - a function which concatenate two strings
 * @src : sourse string
 * @dest : destination string
 * Return : a poiter to aresulting string dest
 */

char *_strcat(char *dest, char src)
{
	int i = 0;
	int j = 0;
	while ( *dest != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);

