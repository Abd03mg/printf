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
		c = 0;

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
	int i, j;
	char *s = va_arg(args, char *);

	for (j = 0; s[j] != '\0'; j++)
		;
	if (j == 0)
		return (-1);
	if (s == NULL)
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

	if (!dec)
		return (-1);
	n = dec;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
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
	int arr[32];
	int c, n, i;

	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n /= 2;
	}

	for (c = i - 1; c >= 0; c--)
		_putchar(arr[c] + '0');
	return (i);
}
