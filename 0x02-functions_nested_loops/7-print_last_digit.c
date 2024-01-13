#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - print the last digit of the integer passed
* to the function
* @n: the integer passed to
* the function
* Return: 0 if success.
*/

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = -n;
		m = n%10;

		return (m);
	}
	else
	{
		m = n%10;
		
		return (m);
	}
	return (n);
}
