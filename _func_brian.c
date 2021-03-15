#include "holberton.h"

/**
 * print_char- print a char
 * @c: character argument
 *
 * Return: 0
 */

int print_char(char c)
{
	_putchar(c);
	return (0);
}

/**
 * print_string- print a string
 * @s: string argument
 *
 * Return: 0
 */

int print_string(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}

/**
 * print_string- print a integer
 * @i: integer argument
 *
 * Return: 0
 */

int print_int(int i)
{
	_putchar(i);
	return (0);
}

/**
 * print_double- print a integer
 * @d: double argument
 *
 * Return: 0
 */

int print_double(double d)
{
	_putchar(d);
	return (0);
}
