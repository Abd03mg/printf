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
		 return(0);

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
		 return("(null)");

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
	int i, c = 0, n;
	int dec = va_arg(args, int);

	if (!dec)
		return(0);
	n = dec;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	n = dec;
	arr = malloc(sizeof(int) * c);
	for (i = 0; i < c; i++)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < c; i++)
		_putchar(arr[c - i - 1] + '0');
	free(arr);
	return (c);
}
