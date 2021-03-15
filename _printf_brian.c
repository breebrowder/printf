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
	va_list variables;

	va_start(variables, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	}
	for (j = 0, k = 1; j <= i, k <= i; j++, k++)
	{
		_putchar(format[j]);
		if (format[j] == 37 && format[k])
		{
			_putchar(va_arg(variables, char*));
			j++;
			k++;
		}
	}
	return (0);

	va_end;
}
