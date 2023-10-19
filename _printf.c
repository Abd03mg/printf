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
	int (*f)(va_list);
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
			if (*(format) == '%')
			{
				len += _putchar('%');
			}

			f = get_spec(*format);
			if (f)
				len += f(args);
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}
