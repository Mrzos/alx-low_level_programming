#include "main.h"

/**
 * _strncat - to complet a array
 * @dest: is a variable
 * @src: also a variable
 * @n; is also variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i <= n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
