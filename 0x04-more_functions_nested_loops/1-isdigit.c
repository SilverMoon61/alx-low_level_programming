#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isdigit - check for a digit.
* @c: the argument to be checked.
* Return: 1 if digit, 0 otherwise.
*/

int _isdigit(int c)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (c == j)
		{
			return (1);
		}
	}
	return (0);
}
