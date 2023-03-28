#include "main.h"

/**
 * _puts - to tyepe  a string
 *
 * @str: a variable
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
