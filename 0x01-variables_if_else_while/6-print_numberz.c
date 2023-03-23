#include <stdio.h>

/**
 * main - is to type alphabitic from A to Z
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
