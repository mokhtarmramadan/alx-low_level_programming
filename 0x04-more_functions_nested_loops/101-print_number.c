#include "main.h"

void print_number(int n)
{
	
	int x = n % 10;
	int last_digit  = x + '0';
	int new_number = n / 10;
	
	if (new_number == 0 && n !=0)
	{
		return;
	}
	else
	{
		_putchar(last_digit);
		print_number(new_number);
	}
}
