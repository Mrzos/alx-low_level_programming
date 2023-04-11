#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of char,& initializes it with a specific char.
 * @c: character to add
 * @size: the size of the memory to print
 *
 * Return: s.
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if (s == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
