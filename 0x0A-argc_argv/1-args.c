#include <stdio.h>

/**
 * main - this is a function to print an argument
 * @argc: argc parameter
 * @argv: an array of the command listed
 *
 * Return: Alway 0.
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
