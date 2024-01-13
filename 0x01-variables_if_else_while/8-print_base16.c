#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all base 16
* numbers in lowercase using
* putchar
* Return: Always zero if success.
*/

int main(void)
{
	int i, j = 48;

	while (j <= 57)
	{
		putchar(j);
		j++;
	}

	i = 97;

	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
