#include "main.h"

/**
 * _strcpy - to complet a array
 * @dest: is a variable
 * @src: also a variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
