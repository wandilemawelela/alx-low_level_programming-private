#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array -  creates an array of chars, and initializes it with a
 * specific char.
 * @size: Array size
 * @c: Character
 *
 * Return: Array chars
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		exit(0);
	} else
	{
		for (i = 0; i < size; ++i)
		{
			ptr[i] = c + 1;
		}
	}
	return (ptr);
}
