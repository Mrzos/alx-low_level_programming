#include "main.h"

/**
 * main - printing alphabitics using lowercase
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
