#include <stdio.h>
#include <stdlib.h>

int count(int change);
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of argument
 * @argv: the array of arguments
 * Return: 0 (success) or 1 (failure)
 */
int main(int argc, char *argv[])
{
	int change, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if ((!atoi(argv[1])) && (*argv[1] != 0))
	{
		printf("Error\n");
		return (0);
	}

	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("0\n");
		return (0);
	}

	coin = count(change);
	printf("%d\n", coin);
	return (0);
}

/**
 * count - returns minimum number of coins
 * @change: number we need to convert
 * Return: minimum number of coins
 */
int count(int change)
{
	int coin;

	coin = 0;
	while (change > 0)
	{
		if (change >= 25)
		{
			change = change - 25;
			coin++;
		}
		else if (change < 25 && change >= 10)
		{
			change = change - 10;
			coin++;
		}
		else if (change < 10 && change >= 5)
		{
			change = change - 5;
			coin++;
		}
		else if (change < 5 && change >= 2)
		{
			change = change - 2;
			coin++;
		}
		else
		{
			change = change - 1;
			coin++;
		}
	}
	return (coin);
}
