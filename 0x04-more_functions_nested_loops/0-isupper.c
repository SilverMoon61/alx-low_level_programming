#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isupper - check if the argument
* is uppercase or not
* @c: the argument passed
* Return: 1 if upper 0 otherwise
*/

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
