#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - prints out the
* alphabets in lowercase
* using their ascii values
* Return: Always 0 for success
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
