#include <stdio.h>

/**
 * main - is to type alphabitic from A to Z
 *
 * Return : n (success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (n);
}
