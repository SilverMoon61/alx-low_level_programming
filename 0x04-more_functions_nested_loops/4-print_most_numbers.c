#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_most_numbers - print all
* single digits except 2 & 4
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
