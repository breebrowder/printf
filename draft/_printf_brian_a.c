#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function to work as printf
 * @format: constant string input
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int i, j, k;
	char *string;
	va_list variables;

	va_start(variables, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		_putchar(format[j]);
		if (format[j] == '%' && format[j + 1])
		{
			string = ;
			for (k = 0; string[k] != '\0'; k++)
			{
				_putchar(va_arg(variables, specifier));
			}
			j++;
		}
	}
	return (0);

	va_end(variables);
}
