#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - returns the length of a string
 * @s: String
 *
 * Return: Integer
 *
 */

int len(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String
 *
 * Return: pointer to a new string which is a duplicate of the string str.
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int length = len(str);
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *) malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		exit(0);
	}

	for (i = 0; i < length; ++i)
	{
		ptr[i] = str[i];
	}

	ptr[length] = '\0';
	return (ptr);
}
