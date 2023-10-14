#include "main.h"

/**
 * _putchar - Prints a character
 * @c: character
 *
 * made by nourredine and Hocine
 * Return: character printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
