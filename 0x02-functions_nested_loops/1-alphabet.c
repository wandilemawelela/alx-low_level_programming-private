#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Nothing
 *
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
