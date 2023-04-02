#include "main.h"

/**
 * _strncpy - to copy in nother array
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
