#include "holberton.h"

/**
 * print_char- print a char
 * @c: character argument
 * @y: count
 * Return: void
 */

int print_char(int y, va_list c)
{
	_putchar(va_arg(c, int));
	y++;

	return (y);
}

/**
 * print_string- print a string
 * @s: string argument
 * @y: count
 * Return: void
 */

int print_string(int y, va_list s)
{
	char *realstr;
	int i;

	realstr = va_arg(s, char *);

		if (realstr == NULL)
		{
			realstr = "(null)";
		}

	for (i = 0; realstr && realstr[i] != '\0'; i++)
	{
		_putchar(realstr[i]);
		y++;
	}
	return (y);
}
/**
 * print_num- print number
 * @n: argument
 * @y: count
 * Return: count
 */
int print_num(unsigned int n, int y)
{
	if (n == 0)
		return (y);

	if (n / 10)
	{
		y = print_num(n / 10, y);
	}
	_putchar(n % 10 + '0');
	y++;

	return (y);
}

/**
 * print_int - print integer
 * @dandi: argument
 * @y: count
 * Return: 1
 */
int print_int(int y, va_list dandi)
{
	int j; /* iterator */

	j = va_arg(dandi, int);

	if (j == 0)
	{
		_putchar('0');
		y++;
		return (y); /* edgecase */
	}

	if (j < 0)
	{
		j *= -1;
		_putchar('-');
		y++;
	}
	y = print_num((unsigned int)j, y);

	return (y);
}
/**
 * print_rev- print a string reverse
 * @r: string argument
 * @y: count
 * Return: void
 */

int print_rev(int y, va_list r)
{
	char *realstr;
	int i;

	realstr = va_arg(r, char *);

	if (realstr == NULL)
	{
		y += _printf("(null)");
		return (y);
	}
	for (i = _strlen(realstr) - 1; i >= 0; i--)
	{
		_putchar(realstr[i]);
		y++;
	}
	return (y);
}
