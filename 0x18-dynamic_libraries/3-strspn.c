#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 * Return:  number of bytes in the initial segment of s which consist
 *  only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}
