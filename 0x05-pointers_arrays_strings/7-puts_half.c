#include "main.h"

/**
 * puts_half - to tyepe  a string
 *
 * @str: a variable
 * Return: 0
 */
void puts_half(char *str)
{
	int l = 0;
	int half;
	int h2;

	while (str[l] != '\0')
	{
		l++;
	}
	half = l % 2;
	if (half == 0)
	{
		h2 = l / 2;
		while (str[h2] != '\0')
		{
			_putchar(str[h2]);
			h2++;
		}
	}
	else if (half != 0)
	{
		h2 = (l / 2) + 1;
		while (str[h2] != '\0')
		{
			_putchar(str[h2]);
			h2++;
		}
	}
	_putchar('\n');
}
