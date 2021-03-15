#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function to work as printf
 * @format: constant string input
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	char *string;
	va_list variables;

	va_start(variables, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		if (format[i] == '%' && format[i + 1])
		{
			_putchar(va_arg(variables, _typedef(format[i], i)));
			i++;
		}
	}
	return (0);

	va_end(variables);
}
