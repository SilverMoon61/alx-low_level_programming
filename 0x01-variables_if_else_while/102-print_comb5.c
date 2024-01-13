#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print combinations
* of two two-digits numbers
* using putchar function
* Return: Always zero if success.
*/

int main(void)
{
	int x = 0;
	int y;

	while (x < 100)
	{
		for (y = x + 1; y < 100; y++)
		{
			putchar('0' + x/10);
			putchar(48 + x%10);
			putchar(' ');
			putchar(48 + y/10);
			putchar('0' + y%10);
			if ( x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}

	return (0);
}
