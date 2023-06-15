#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: String
 *
 * Return: String lenght integer
 *
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);
}
