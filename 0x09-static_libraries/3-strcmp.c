#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int count_one = 0;
	int count_two = 0;
	int result;

	i = 0;
	while (s1[i] != '\0')
	{
		count_one += (int) s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		count_two += (int) s2[i];
		i++;
	}

	result = count_one - count_two;

	return (result);
}
