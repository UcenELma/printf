#include "main.h"

/**
 * _pt_base - function for printing an unsigned integer in a specified base
 * @n: integer
 * @base: base
 * @digit: digit
 *
 * Return: number of characters printed
 */
int _pt_base(unsigned long n, int base, char *digit)
{
	int count = 0;

	if (n / base)
		count += _print_base(n / base, base, digit);

	count += _putchar(digit[n % base]);

	return (count);
}
/**
 * _print_pointer - function for handling the %p
 * @pt: pointer
 *
 * Return: number of characters printed
 */
int _print_pointer(void *pt)
{
	unsigned long address = (unsigned long)pt;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += _pt_base(address, 16, "0123456789abcdef");

	return (count);
}
