#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: 0 (Success)
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
