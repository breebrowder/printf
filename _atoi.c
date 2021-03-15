#include "holberton.h"

/**
 * _atoi - pointer to convert a string to an int
 * @s: string
 * Return: if no num, return 0
 */

int _atoi(char *s)
{
	int i = 0 n = 1, num;

	if (s[0] = '-')
	{
		n = -1;
		i++;
	}
	num = s[i] + '0';
	for (; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] + '0');
	}
	return (num * n);
}
