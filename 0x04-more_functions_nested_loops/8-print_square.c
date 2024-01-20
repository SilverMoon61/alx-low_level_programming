#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_square - print a square
* @size: the size of the square
*/

void print_square(int size)
{
	int n;
	int m;

	if (size <= 0)
	{
		_putcahar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
