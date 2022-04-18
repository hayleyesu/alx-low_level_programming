#include "main.h"

/**
 * swap_int - swap value of a and b
 * @a: value to be given to b
 * @b: value to be given to a
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
