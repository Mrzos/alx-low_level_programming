#include "main.h"

/**
 * _strcat - to complet a array
 * @dest: is a variable
 * @src: also a variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;
	int p;

	while (dest[len] != '\0')
	{
		len++;
	}
	p = len + i;
	while (i <= p && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return(0);
}
