#include "main.h"

/**
 * _handle - prints a character
 * @c: character
 * @list: list to print
 * made by nourredine and Hocine
 * Return: character printed
 */

int _handle(va_list list, char c)
{
	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_print_string(va_arg(list, char *)));
	else if (c == 'i' || c == 'd')
		return (_print_integer(va_arg(list, int)));
	else if (c == '%')
		return (_putchar('%'));
	_putchar('%');
	_putchar(c);
	return (2);
}
