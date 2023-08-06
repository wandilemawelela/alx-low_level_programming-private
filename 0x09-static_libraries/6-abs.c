#include "main.h"
#include <stdio.h>

/**
 * _abs -  computes the absolute value of an integer.
 * @n: Number
 * Return: Absolute value of the integer argument.
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
