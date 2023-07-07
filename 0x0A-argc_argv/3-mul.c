#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: an array of the argument
 * Return: returns 1 if it doesn't recieve 2 args
 */
int main(int argc, char *argv[])
{
	int result;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}
