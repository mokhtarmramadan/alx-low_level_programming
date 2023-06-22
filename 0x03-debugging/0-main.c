#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	int answer = positive_or_negative(i);

	if (answer == 0)
	{
		printf("0 is zero\n");
	}
	else
	{
		printf("0 is not zero\n");
	}
	return (0);
}


