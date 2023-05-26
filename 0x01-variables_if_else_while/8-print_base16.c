#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char letters = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
