#include "main.h"

/**
 * _print_base - prints an unsigned integer
 * @n: integer to print
 * @base: base
 * @digit: digit
 *
 * made by nourredine and Hocine
 *
 * Return: number of characters printed
 */

int _print_base(unsigned int n, int base, char *digit)
{
	int count = 0;

	if (n / base)
		count += _print_base(n / base, base, digit);

	count += _putchar(digit[n % base]);
	return (count);
}
