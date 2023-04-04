#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: variable
 * @c: character to change
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int l;

	while (1)
	{
		l = *s++;
		if (l == c)
		{
			return (s - 1);
		}
		if (l == 0)
		{
			return (NULL);
		}
	}
}
