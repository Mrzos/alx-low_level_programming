#include "main.h"
/**
 * _strcmp - to copy in nother array
 * @s1: variable
 * @s2: variable
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int l = 0;
	char r;

	while (s1[i] != '\0' || s2[l] != '\0')
	{
		if (s1[i] == s2[l])
		{
			i++;
			l++;
		}
		else if (s1[i] != s2[l])
		{
			break;
		}
	}
	r = s1[i] - s2[l];
	return (r);
}
