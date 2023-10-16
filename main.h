#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _handle(va_list list, char c);
int _print_string(char *s);
int _print_integer(int n);
int _printf(const char *format, ...);
int _print_binary(unsigned int i);
int _print_base(unsigned int n, int base, char *digit);
int _print_string_non_printable(char *s, char *X);
int _print_pointer(void *pt);
int _pt_base(unsigned long n, int base, char *digit);
#endif
