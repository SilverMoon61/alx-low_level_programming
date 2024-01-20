#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_numbers - print single
* digit integers using putchar
*/

void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0' + k);
	}
	_putchar('\n');
}
