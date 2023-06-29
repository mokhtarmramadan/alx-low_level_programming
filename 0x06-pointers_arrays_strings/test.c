#include <stdio.h>

int main(void)
{
	char *s = "World!";
	char *m = "Hello";
	int i;
	int count_one = 0;
	int count_two = 0;

	i = 0;
	while (s[i] != '\0')
	{

		i++;
		count_one += (int) s[i];
	}

	i = 0;

	while (m[i] != '\0')
	{
		i++;
		count_two += (int) m[i];
	}
	int result = count_one - count_two;

	printf("%d\n", result);

	return (0);
}
