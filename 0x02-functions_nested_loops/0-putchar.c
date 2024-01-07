#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* function - use the _putchar
* to print putchar to the screen
* Return: Always zero if success
**/

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{

		_putchar(a[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
