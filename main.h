#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct spec - struct to dtermine correct function.
 *
 * @c: specifier.
 * @f: pointer to spec function.
 */
typedef struct spec
{
	char c;
	int (*f)(va_list args);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int (*get_spec(char c))(va_list args);
int _puts(char *s);
char *int_to_str(long int a, int base);
int print_hex(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_upper(va_list args);

#endif
