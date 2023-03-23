#include "main.h"

/**
 * main - printing alphabitics using lowercase 
 *
 * Return; always 0.
 */
void print_alphabet()
{
	int i;

	for ( i = 'a'; i <= 'z' ; ++i )
	{
		_putchar(i);
	}
	_putchar('\n');
}
