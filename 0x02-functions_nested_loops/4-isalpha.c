#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: Character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
