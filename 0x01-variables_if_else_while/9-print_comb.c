#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all possible
* combinations of single digit
* numbers separated by spaces
* and comma and in ascending order.
* Return: Always zero if success.
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 57)
		{
			putchar(i);
			i++;
		}
		else
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			i++;
		}
	}

	return (0);
}
