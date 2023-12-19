#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*
*
*/
int main(void)
{	int n;
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	i = n % 10;
	printf("%d divided by 10 is: %d\n", n, i);

	return 0;
}
