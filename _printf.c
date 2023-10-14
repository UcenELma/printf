#include "main.h"

/**
 * _printf - prints a string
 * @format: string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			count += _handle(args, format[i]);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
