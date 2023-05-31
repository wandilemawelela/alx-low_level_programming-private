#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Nothing
 *
 */

void jack_bauer(void)
{
	int min = 0;

	while (min <= 59)
	{
		if (min == 59)
		{

		}
		putchar((min / 10) + '0');
		putchar((min % 10) + '0');
		min++;
		putchar('\n');
	}
}
