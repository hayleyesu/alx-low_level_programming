#include "main.h"

/**
 *create_array - creates array of char
 *@size:
 *@c: charactor
 *return : charactor array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
		return (str);
}
