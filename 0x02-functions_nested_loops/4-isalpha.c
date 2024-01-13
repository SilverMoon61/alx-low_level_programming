#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _isalpha - check whether the argument is a letter
* @c: argument passed to the function
*Return: 1 if alphabet 0 otherwise
*/

int _isalpha(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	for (i = 65; i <= 90; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
