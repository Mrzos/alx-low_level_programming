#include "main.h"
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
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (0);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
