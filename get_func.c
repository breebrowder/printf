#include "holberton.h"

/**
 * @_typedef- struct of specifier types
 * @argspass: arguments being passed
 * @argspos: position of arguments
 *
 *
 */

int (*_typedef(const char *argspass, int argspos))(va_list)
{
	specifier types[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_deci},
		{NULL, NULL},
	};

	int index;

	for (types[index].args != '\0'; index++)
	{
		if (types[index].args[0] == argspass[argspos])
		{
			return (types[index].func);
		}
		return (NULL);
	}
}
