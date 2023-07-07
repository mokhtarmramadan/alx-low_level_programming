#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: an array of the argument
 * Return: returns 1 if one of the number contains symbols
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		exit(0);
	}
	else if (argc == 2)
	{
		printf("%s\n", argv[1]);
		exit(0);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) || *argv[i] == 48)
		{
			sum += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}

