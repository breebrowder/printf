#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <systypes.h>
#include <string.h>

/**
 * specifier- our struct name
 * @parameters: all specifier arguments
 * @func: pointer function
 */

typedef struct specifier
{
	char *parameters;
	int(*func)(va_list);
};

int _putchar(char c);
int _printf(const char *format, ...);
int (*_typedef(const char *argspass, int argspos))(va_list);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list id);

#endif
