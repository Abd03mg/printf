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
	int len = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*(format) == '\0')
				return (-1);
			if (*(format) == '%')
				len += _putchar('%');
		/*
		 *	for (j = 0; sp[j] != '\0'; j++)
		 *	{
		 *		if (sp[j] == *format)
		 *			len += (get_spec(sp[j]))(args);
		 *	}
		 */
			if (get_spec(*format))
			{
				len += (get_spec(*format))(args);
			}
		}
		else
		{
			if (*format == '\0')
				return (len);
			if (!(*format))
				return (-1);
			len += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}
