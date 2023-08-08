#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argc parameter
 * @argv: an array of the command listed
 *
 * Return: Alway 0.
 *
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			int j;

			for (j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += strtol(arg, NULL, 10);
		}
	}
	printf("%d\n", sum);
	return (0);
}
