#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_sign - print the sign
* of the argument
* @n: the argument passed to the function
* Return: 1 if greater than zero 0 if 0 and -1 if less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(0);
	return (0);
}
