#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* this script is to detect the number is: positive negative or zero*/
int main(void)
/* hello */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
