#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
*/

void print_triangle(int size)
{

	int t;
	int r;
	int n;

	if ((size < 0) || (size == 0))
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size; t++)
		{
			r = 1;
			while (r <= (size - t))
			{
				_putchar(' ');
				r++;
			}
			for (n = 1; n <= t; n++)
			{
				_putchar('#');
			}

		_putchar('\n');
		}
	}
}
