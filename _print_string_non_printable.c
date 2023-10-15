#include "main.h"

/**
 * _print_string_non_printable - prints a string with non-printable characters
 * @s: string
 * @X: uppercase hexadecimal characters
 *
 * Return: number of characters printed
 */
int _print_string_non_printable(char *s, char *X)
{
	int count = 0;
	int i = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		if (s[i] >= 32 && s[i] < 127)
		{
			_putchar(s[i]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
			{
				_putchar('0');
				_putchar(X[(int)s[i]]);
				count += 4;
			}
			else
			{
				_putchar(X[(s[i] / 16)]);
				_putchar(X[(s[i] % 16)]);
				count += 4;
			}
		}
		i++;
	}
	return (count);
}
