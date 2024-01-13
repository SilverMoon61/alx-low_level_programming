#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print the alphabets
* in lowercase using putchar
* to print it in reverse
* Return: Always zero if success.
*/

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
