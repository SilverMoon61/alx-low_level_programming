#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_alphabet_x10 - print
* lowercase alphabets 10 times
* Return:Always zero if success.
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
