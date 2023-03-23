#include <stdio.h>

/**
 * main - is to Write a program that prints all possible combinations of single-digit numbers.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n < '9')
	{
		putchar(n);
		putchar(',');
		n++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
