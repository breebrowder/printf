#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function to work as printf
 * @format: constant string input
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int j, k;
	char *string;
	va_list variables;

	va_start(variables, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		_putchar(format[j]);
		if (format[j] == '%' && format[j + 1])
		{
			for (k = 0; string[k] != '\0'; k++)
			{
				_putchar((*specifier)());
			}
			j++;
		}
	}
	return (0);

	va_end(variables);
}
