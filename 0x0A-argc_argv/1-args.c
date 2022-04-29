#include "main.h"

/**
 * main - program entry
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	for (i = 0;i < argc;i++)
	{
		count = count + 1;
	}
	
	printf("%d\n",count);
	return (0);
}
