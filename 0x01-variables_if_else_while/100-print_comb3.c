#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all possible
* combinations of two digits
* number
* Return: Always zero if success.
*/

int main(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
