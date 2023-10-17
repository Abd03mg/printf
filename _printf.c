#include "main.h"

/**
 * _printf - function that produce output according
 * to a format.
 *
 * @format: specific format.
 * Return: lenght of printed items.
 */

int _printf(const char *format, ...)
{
	int len = 0, i = 0, j;
	char *sp = "%csd";
	va_list args;

	va_start(args, format);
	if (!format || !format[i])
		return (-1);
	while (*format && format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
				return (-1);

			format++;
			for (j = 0; sp[j] != '\0'; j++)
			{
				if (sp[j] == *format)
					len += (get_spec(sp[j]))(args);
			}
		}
		else
			len += _putchar(*format);
		format++;
	}
	return (len);
}
