#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First interger
 * #b: Second interger
 *
 * Return: Nothing
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
