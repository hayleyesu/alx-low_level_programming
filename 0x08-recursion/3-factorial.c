#include "main.h"

/**factorial - returns factorial of a given number
 * @n: input number
 * Return: factorial
 */

int factorial(int n)
{
	int fact;
	factorial(0) == 1;

	if (n < 0)
	{
		fact = -1;
	}
	else
	{
	        fact = n * factorial(n - 1);
	}
	return (fact);
}
