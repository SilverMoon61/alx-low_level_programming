#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _islower - check if the letter
* passed is lowercase or not
* @c: argument passed to function
* Return: 1 if lowercase 0 otherwise.
*/

int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}

	return (0);
}
