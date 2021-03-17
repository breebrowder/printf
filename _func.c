#include "holberton.h"

/**
 * print_char- print a char
 * @c: character argument
 *
 * Return: void
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));

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

	realstr = va_arg(s, char *);

		if (realstr == '\0')
			return ('\0');

	for (; realstr[i] != '\0'; i++)
	{
		_putchar (realstr[i]);
	}
	return (i);
}
/**
 * keep_count- keeps count of the string index position
 * @n: argument
 * Return: void
 */
void keep_count(int n)
{
	char c = '0';

	if (n / 10)
	{
		keep_count(n / 10);
	}
	_putchar(n % 10 + c);
}

/**
 * print_int - print integer
 * @dandi: argument
 * Return: 0
 */
int print_int(va_list dandi)
{
	int j;

	j = va_arg(dandi, int);

	if (j < 0)
	{
		j *= -1;
		_putchar('-');
	}
	keep_count((unsigned int) j);

	return (1);
}
