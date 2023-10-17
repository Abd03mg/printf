#ifndef MAIN_H
#define MAIN_H

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
int (*get_spec(char c))(va_list args);
int _puts(char *s);
int print_per(va_list args);

#endif
