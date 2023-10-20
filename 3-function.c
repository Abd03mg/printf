#include "main.h"

/**
 * print_hex_upper - function that prints hex in
 * upper case letter.
 *
 * @args: input int.
 * Return: lenght of printed chars.
 */
int print_hex_upper(va_list args)
{
	char *s;
	int i;

	s = int_to_str(va_arg(args, unsigned int), 16);
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] = s[i] - 32;
	}
	i = _puts(s);
	return (i);
}
	
