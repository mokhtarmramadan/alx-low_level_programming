#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of the arguments
 * @argv: the actuall commnad arguments
 * Return: A program that prints its name
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	exit(0);
}

