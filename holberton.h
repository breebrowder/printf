#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct specifier- our struct name
 * @args: all specifier arguments
 * @func: pointer function
 */

typedef struct specifier
{
	char *args;
	int (*func)(int y, va_list);

} sp_t;

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int _typedef(const char *str, int *ptr_i, int y, va_list variables);
int print_char(int y, va_list c);
int print_string(int y, va_list s);
int print_num(unsigned int n, int y);
int print_int(int y, va_list dandi);
int print_rev(int y, va_list r);


#endif
