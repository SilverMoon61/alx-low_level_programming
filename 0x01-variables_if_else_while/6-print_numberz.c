#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all single
* digits of base 10 numbers
* using putchar
* Return: Always zero if success.
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
