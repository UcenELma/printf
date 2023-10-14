#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int _handle(va_list list, char c);
int _print_string(char *s);
int _print_integer(int n);
int _printf(const char *format, ...);

#endif
