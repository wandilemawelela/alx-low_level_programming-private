#include "main.h"i
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers, followed by a
 * new line.
 * @a: Pointer to the first element of the interger array
 * @n: Number of elements of the array to be printed
 *
 * Return: Nothing.
 *
 */

void print_array(int *a, int n)
{
	int i, k, digit, num, sign;

	for (i = 0; i < n; i++)
	{
		num = a[i];
		digit = 1;
		sign = 1;

		/* Determine the number of digits in the integer value */
		if (num < 0)
		{
			sign = -1;
			num = -num;
		}

		while (num / digit >= 10)
		{
			digit *= 10;
		}

		/* Print the sign and each digit of the integer value */
		if (sign == -1)
		{
			putchar('-');
		}

		while (digit > 0)
		{
			k = num / digit;
			putchar(k + '0');
			num %= digit;
			digit /= 10;
		}

		/* Print a comma and space after each element, except the last one */
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/* Print a new line character to terminate the line */
	putchar('\n');
}
