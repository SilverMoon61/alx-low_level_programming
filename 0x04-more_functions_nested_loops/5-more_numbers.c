#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* more_numbers - print numbers
* from 1 - 14 ten times.
*/

void more_numbers(void)
{
	int m;

	for (m = 1; m <= 14; m++)
	{
		if ((m / 10) > 0)
		{
			_putchar('0' + m / 10);
		}
		_putchar('0' + m % 10);
	}
	_putchar('\n');
}
