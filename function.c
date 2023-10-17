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

	if (!c)
		c = '\0';

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

	if (!s)
		s = "(null)";
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
	int *arr;
	int i, c = 0, n, neg = 0;
	int dec = va_arg(args, int);

	n = dec;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	n = dec;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		neg = 1;
	}
	arr = malloc(sizeof(int) * c);
	for (i = 0; i < c; i++)
	{
		arr[c - i - 1] = n % 10;
		n /= 10;
	}
	for (i = 0; i < c; i++)
		_putchar(arr[i] + '0');
	free(arr);
	return (c + neg);
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
	int arr[1024];
	int c = 0, n, i;

	n = va_arg(args, unsigned int);
	while (n != 0)
	{
		n /= 2;
		arr[c] = n * n % 2;
		c++;
	}
	for (i = 0; i < c; i++)
		putchar(arr[i] + '0');
	return (c);
}
