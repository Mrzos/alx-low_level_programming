#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: an array of integers
 * Return: s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
