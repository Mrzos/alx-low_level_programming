#include "main.h"

/**
 * puts2 - to tyepe  a string
 *
 * @str: a variable
 * Return: 0
 */
void puts2(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str+=2;
        }
                _putchar('\n');
}
