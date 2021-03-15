#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * specifier- our struct name
 * @parameters: all specifier arguments
 * @func: pointer function
 */

typedef struct
{
	char *args;
	int(*func)(va_list);

}sp_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list id);

#endif
