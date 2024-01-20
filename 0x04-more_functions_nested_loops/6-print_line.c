#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_line - print lines for
* 'n' number of times
* @n: the number of times '_'
* should be printed
**/

void print_line(int n)
{
	int i;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
