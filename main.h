#ifndef MAIN_H
#define MAIN_H

/*includes file*/

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define BUFF_SIZE 1024

/*prototypes*/
int _putchar(char c);
int _handle(va_list list, char c);
int _print_string(char *s);
int _print_integer(int n);
int _printf(const char *format, ...);
int _print_binary(unsigned int i);
int _print_base(unsigned int n, int base, char *digit);
int _print_string_non_printable(char *s, char *X);
int _print_pointer(void *pt);
int _pt_base(unsigned long int x, char b);

#endif
