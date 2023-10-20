#include "main.h"

/**
 * print_bin - print binary.
 *
 * @args: input int.
 * Return: count of printed char.
 */

int print_bin(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, unsigned int), 2);
	len = _puts(s);
	return (len);
}

/**
 * int_to_str - function that return input int to output str.
 *
 * @a: input number.
 * @base: base of integer.
 * Return: pointer to char.
 */
char *int_to_str(long int a, int base)
{
	char *arr = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = a;

	if (a == 0)
		return ("0");
	if (a < 0)
	{
		n = -a;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	while (n != 0)
	{
		*--ptr = arr[n % base];
		n /= base;
	}

	if (sign)
		*--ptr = sign;
	return (ptr);
}


/**
 * print_hex - print hex.
 *
 * @args: input int.
 * Return: count of printed char.
 */

int print_hex(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, unsigned int), 16);
	len = _puts(s);
	return (len);
}


/**
 * print_unsigned - print unsigned int.
 *
 * @args: input int.
 * Return: count of printed char.
 */

int print_unsigned(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, unsigned int), 10);
	len = _puts(s);
	return (len);
}


/**
 * print_octal - print octal int.
 *
 * @args: input int.
 * Return: count of printed char.
 */

int print_octal(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, unsigned int), 8);
	len = _puts(s);
	return (len);
}

