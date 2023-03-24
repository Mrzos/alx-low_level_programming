#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: is a character
 * Return: Always 0.
 */
int _islower(int c)
{
	int c;

	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
