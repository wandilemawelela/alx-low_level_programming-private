#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all values passed into an argument in a new line
 * @argc: argc parameter
 * @argv: an array of the command listed
 *
 * Return: Alway 0.
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
