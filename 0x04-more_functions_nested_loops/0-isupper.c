#include "main.h"

/**
 * _isupper -Check if the letter is uppercase
 * Return: 1 for uppercase letter or 0 for any else
 */

int _isupper(int x)
{
	if(x >=65 && x <=90)
	{
		return (1);
	}
	else
		return (0);
}
