#include "main.h"

/**
 * _print_binary - prints a binary number
 * @i: number
 *
 * made by nourredine and Hocine
 * Return: number of characters printed
 */

int _print_binary(unsigned int i)
{
	int count = 0;

	if (i / 2)
		count += _print_binary(i / 2);
	count += _putchar(i % 2 + '0');
	return (count);
}
