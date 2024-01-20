#include <stdio.h>
#include <stdlib.h>

/**
* main - print the fizzbuzz
* Description: for multiples of 3
* print 'fizz', for multiples of 5
* print 'buzz' and print 'fizzbuzz'
* for multiples of 15.
* Return: 0 if success
*/

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("%s", "FizzBuzz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
			putchar(' ');
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
			putchar(' ');
		}
		else
		{

			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
