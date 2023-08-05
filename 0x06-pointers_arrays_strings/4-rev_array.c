#include "main.h"
#include <stdio.h>

/**
 * swap - swap function
 * @a: first element
 * @b: second element
 *
 * Return: Nothing
 *
 */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers
 * @n: number of bytes
 *
 * Return: Nothing.
 *
 */

void reverse_array(int *a, int n)
{
	int *ptr1 = a; /* Points to the first element of the arr */
	int *ptr2 = a + n - 1; /* Points to the last element of the arr */

	while (ptr1 < ptr2)
	{
		swap(ptr1, ptr2);
		ptr1++;
		ptr2--;
	}
}
