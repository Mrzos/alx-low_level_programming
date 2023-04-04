#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: another variable
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
