#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 *
 * Return: Nothing
 *
 */

void print_line(int n)
{
	int i;

	if (n == 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
