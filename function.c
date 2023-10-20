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
