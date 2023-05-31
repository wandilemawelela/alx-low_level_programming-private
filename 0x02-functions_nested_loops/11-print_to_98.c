#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: Natural naumber to print from
 * Return: 0 (Success)
 *
 */

void print_to_98(int n)
{
	int num = n;

	while (num <= 98)
	{
		if (n < 0)
		{

		}
		printf("%d", num);
		num++;
	}
	printf("\n");
}
