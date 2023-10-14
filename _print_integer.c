#include "main.h"

/**
 * _print_integer - prints an integer
 * @n: integer
 *
 * Return: number of characters printed
 */
int _print_integer(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		if (n == -2147483648)
		{
			count += _putchar('2');
			n %= 1000000000;
		}
		count += _print_integer(-n);
	}

	else if (n >= 0 && n <= 9)
		count += _putchar(n + '0');
	else
	{
		count += _print_integer(n / 10);
		count += _print_integer(n % 10);
	}
	return (count);
}
