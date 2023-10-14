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
	char *X = "0123456789ABCDEF";
	char *x = "0123456789abcdef";

	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_print_string(va_arg(list, char *)));
	else if (c == 'i' || c == 'd')
		return (_print_integer(va_arg(list, int)));
	else if (c == 'b')
		return (_print_binary(va_arg(list, unsigned int)));
	else if (c == 'o')
		return (_print_base(va_arg(list, unsigned int), 8, "01234567"));
	else if (c == 'u')
		return (_print_base(va_arg(list, unsigned int), 10, "0123456789"));
	else if (c == 'x')
		return (_print_base(va_arg(list, unsigned int), 16, x));
	else if (c == 'X')
		return (_print_base(va_arg(list, unsigned int), 16, X));
	else if (c == '%')
		return (_putchar('%'));
	_putchar('%');
	_putchar(c);
	return (2);
}
