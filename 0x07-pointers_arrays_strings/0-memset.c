#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: another variable
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	while (l < n)
	{
		s[l] = b;
		l++;
	}
	return (s);
}
