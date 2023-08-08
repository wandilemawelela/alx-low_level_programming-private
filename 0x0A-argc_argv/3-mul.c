#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argc parameter
 * @argv: an array of the command listed
 *
 * Return: Alway 0.
 *
 */

int main(int argc, char *argv[])
{
	int product = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
