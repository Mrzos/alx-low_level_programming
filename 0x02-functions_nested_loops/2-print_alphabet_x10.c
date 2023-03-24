#include "main.h"


/**
 * print_alphabet_x10 - printing alphabitics using lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 1;

	while (n <= 10)
	{
		for (c = 'a'; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
