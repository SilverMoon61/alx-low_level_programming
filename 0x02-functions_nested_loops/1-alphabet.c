#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_alphabet - print alphabets
* Description: print alphabets in
* lowercase using _putchar
* prototype
* Return: Always zero if success.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
