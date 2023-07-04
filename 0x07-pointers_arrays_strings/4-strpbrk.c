#include "main.h"

/**
 * _srpbrk - searches a string for any of a set of bytes.
 * @s: The orignal string
 * @accept: the substring
 * Return: a pointer for a substring
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;
	int i;
	int j;
	
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				*temp = s[i];
				j++;
				temp++;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return (temp);
}
