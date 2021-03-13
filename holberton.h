#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdio.h>

/**
 * Team: Print Fun!
 * prototypes for printf project
 */

int _printf(const char *format, ...);
int _putchar(char c)
{
	return (write(1, &c, 1));
};

#endif
