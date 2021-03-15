#include "holberton.h"

/**
 * print_char- print a char
 * @c: character argument
 *
 * Return: void
 */

int print_char(va_list c)
{
	_putchar (va_arg(c, int));

	return (1);
}

/**
 * print_string- print a string
 * @s: string argument
 *
 * Return: void
 */

int print_string(va_list s)
{
	char *realstr;
	int i;

	realstr = va_arg(s, char *)

		if (realstr == '\0')
			return ('\0');

	for (; realstr[i] != '\0'; i++)
	{
		_putchar (realstr[i]);
	}
	return (i);
}
