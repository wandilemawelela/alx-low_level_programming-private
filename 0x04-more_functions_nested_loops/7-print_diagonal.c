#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: Nothing
 *
 */

void print_diagonal(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			putchar(92);
			putchar('\n');
		}
		putchar('\n');
	}
}
