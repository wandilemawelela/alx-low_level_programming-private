#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
 *
 */

int main(void)
{
	char *s;
	s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, s, strlen(s));
	return (1);
}
