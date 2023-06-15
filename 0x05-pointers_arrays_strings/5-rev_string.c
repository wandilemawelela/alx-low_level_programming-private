#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: String
 *
 * Return: Nothing
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	/**
	 * Iterates over the first half of the string.
	 * Swaps each char with its corresponding char from
	 * the second half of the string
	 *
	 */

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];

		/**
		 * s[len - i - 1] - accesses corresponding char
		 * from the second half of the string
		 *
		 */

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
	putchar('\n');
}
