#include "main.h"

/**
 * print_rev - to print a str in reverse
 * @s: is a variable
 * Return: 0
 */
void print_rev(char *s)
{

	int l = 0;
	int len;

	while (s[l] != '\0')
	{
		l++;
	}
	len = l - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
