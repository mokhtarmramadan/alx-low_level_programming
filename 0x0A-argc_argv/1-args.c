#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: the array of argument
 * Return: void
 */
int main(int argc, char *argv[])
{
	argv[0] = "Program name";
	printf("%d\n", (argc - 1));
	exit(0);
}
