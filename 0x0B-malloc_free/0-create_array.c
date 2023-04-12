#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *) malloc (size * sizeof (char));
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
