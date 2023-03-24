#include "main.h"

/**
 * _isalpha - checks for lowercase & upercase character.
 *
 * @c: is a character
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
