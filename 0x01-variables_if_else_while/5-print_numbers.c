#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - print all digits
* of base 10 numbers
* starting from zero
* Return: Always zero if success.
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
