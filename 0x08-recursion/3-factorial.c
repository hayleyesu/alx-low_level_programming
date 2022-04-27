#include "main.h"

/**factorial - returns factorial of a given number
 * @n: input number
 * Return: factorial
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		fact = -1;
	}
	else if
	{
		if(n == 0)
		{
			fact = 1;
		}
	        fact = n * factorial(n - 1);
	}
	return (fact);
}
