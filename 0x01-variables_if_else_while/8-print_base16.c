#include <stdio.h>

/**
 * main - is to type alphabitic from A to Z
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char n = 'a';
	int m = 48;

	while (m <= 57)
	{
		putchar(m);
		m++;
	}
	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
