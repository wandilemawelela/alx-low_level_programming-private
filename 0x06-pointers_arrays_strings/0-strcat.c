#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds len of the strings
 * @s: strings
 *
 * Return: String length
 *
 */

int _strlen(char *s)
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
 * _strcat - concatenates two stringd
 * @dest: destination
 * @src: source
 *
 * Return: Destination string
 *
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
