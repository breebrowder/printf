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
 * Return: 0
 */
int keep_count(int n)
{
	int counter = 0; /* this keeps count of the string */
	int div = (n / 10);  /* handle left values: divide argument by 10 */
	int mod = (n % 10); /* right values: get remainder after division */

	if (n != 0) /* 0 is index position */
	{
		div = (n / 10);  /* handle left values: divide argument by 10 */
		mod = (n % 10); /* right values: get remainder after division */
		counter += keep_count(mod); /* adds the value of the right
	    operand to a variable and assigns the result to the variable */
		counter++;
		_putchar(div + '0');
		return (counter);
	}
	return (0);
}
