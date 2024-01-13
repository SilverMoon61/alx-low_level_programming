#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all possible
* combinations of three digits
* numbers
* Return: Always zero if success.
*/

int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 8)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(48 + x);
				putchar(48 + y);
				putchar(48 + z);
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
