#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* function - prints the alphabet
* in lowercase and uppercase
* using putchar
* Return: Always zero if success
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
return (0);
}
