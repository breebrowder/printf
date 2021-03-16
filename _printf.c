#include "holberton.h"

/**
 * _printf - custom function that prints output format
 * @format: all arguments being passed
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list variables;
	unsigned int i = 0;
	unsigned int y = 0;

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
		else if (format[i] == '%' && _typedef(format, i + 1) != NULL)
		{
			y += _typedef(format, i + 1)(variables);
			i++;
		}
		else
		{
			_putchar(format[i]);
			y++;
		}
	}
	return (y);

	va_end(variables);
}
