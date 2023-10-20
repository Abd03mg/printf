#include "main.h"

/**
 * print_char - funtion that print char.
 *
 * @args: specific char.
 * Return: count of printed char.
 */

int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - function that print strings.
 * @args: specific str.
 * Return: count of printed chars.
 */

int print_str(va_list args)
{
	int i;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_dec - function that print decimal number.
 * @args: input n.
 * Return: len of nubers.
 */

int print_dec(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, int), 10);
	len = _puts(s);
	return (len);
}

/**
 * _puts - funtion that print string.
 * @s: input string.
 * Return: count of printed chars.
 */
int _puts(char *s)
{
	int c;

	for (c = 0; *(s + c) != '\0'; c++)
		_putchar(s[c]);
	return (c);
}

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
 * @num: input number.
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
 * print_hex - function that print hex numbers.
 *
 * @args: input int.
 * Return: lenght of printed cahrs.
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
 * print_unsigned - function that prints unsigned int.
 *
 * @args: input int.
 * Return: lenght of printed chars.
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
 * print_octal - function that prints octal ints.
 *
 * @args: input int.
 * Return: lenght of printed chars.
 */
int print_octal(va_list args)
{
	char *s;
	int len;

	s = int_to_str(va_arg(args, unsigned int), 8);
	len = _puts(s);
	return (len);
}
