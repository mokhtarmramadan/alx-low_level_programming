#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: an array of the argument
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(0);
}
