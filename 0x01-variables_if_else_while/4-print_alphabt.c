#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: Print all alphabets
* except q and e
* Return: Always zero if success
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
