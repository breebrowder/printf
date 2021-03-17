#include "holberton.h"

/**
 * _printf - custom function that prints output format
 * @format: all args being passed
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list variables;
	int i = 0;
	int y = 0;
	int *ptr_i = &i;

	va_start(variables, format);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			y++;
			i++;
		}
		else if (format[i] == '%')
		{
			y = _typedef(format, ptr_i, y, variables);
			i++;
		}
		else
		{
			_putchar(format[i]);
			y++;
		}
	}
	va_end(variables);

	return (y);
}
