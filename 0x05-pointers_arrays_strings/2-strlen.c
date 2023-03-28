#include "main.h"

/**
 * _strlen - to calcule lengthe of string
 * @s: is a variable
 * @l: a variable
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

