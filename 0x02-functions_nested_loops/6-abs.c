#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _abs - print the absolute value
* of the integers passed
* @n: integer passed
* Return: 0 if success.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
	{
		return (n);
	}
	return (0);
}
