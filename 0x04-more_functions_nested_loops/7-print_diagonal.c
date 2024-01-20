#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagonal - draw a diagonal
* @n: the number of times it must
* be drawn
*/

void print_diagonal(int n)
{
	int m;
	int k;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (k = 1; k <= m; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
