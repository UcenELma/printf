#include "main.h"

/**
 * _print_string - prints a string
 * @s: string
 *
 * Return: number of characters printed
 */

int _print_string(char *s)
{
	int n = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	return (n);
}
