#include "holberton.h"

/**
 * @*_typedef- struct of specifier types
 * @str: arguments being passed
 * @ptr_i: pointer to format index
 * @y: position of args
 * @variables: va_list name
 *
 * Return: 0
 */

int _typedef(const char *str, int *ptr_i, int y, va_list variables)
{
	sp_t types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"r", print_rev},
		/*	{"p", p_rot13}, */
		{NULL, NULL}
	};

	int j; /* iterator */

	for (j = 0; types[j].args != '\0'; j++)
	{
		if (types[j].args[0] == str[*(ptr_i) + 1])
		{
			y = types[j].func(y, variables);
		}
	}
	return (y);
}
