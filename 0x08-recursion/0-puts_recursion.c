#include "main.h"
/**
 * _puts_recursion - prints the chessboard.
 * @s: the address of memory to print
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		return;
	}
}
