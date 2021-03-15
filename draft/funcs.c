#include "holberton.h"

/**
 * print_char- print a char
 * @c: character argument
 * Return: the char
 */

int print_char(va_list c)
{
	return (va_arg(c, char));
}

/**
 * print_int- print an int
 * @i: int argument
 * Return: the int
 */

int print_int(va_list i)
{
	return (va_arg(i, int));
}

/**
 * print_string- print a string
 * @s: string argument
 * Return: the string
 */

int print_string(va_list s)
{
	char *realstr;
	int i;

	realstr = va_arg(s, char *);
	if (realstr == NULL)
	{
		return (NULL);
	}
	return (realstr);
}
