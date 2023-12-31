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

	if (!format || *format == '\0')
		return (-1);
	if ((strcmp(format, "%") == 0) || (strcmp(format, "% ") == 0))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			f = get_spec(*format);
			if (*(format) != '%')
			{
				if (f)
					len += f(args);
				else
				{
					len += _putchar('%');
					len += _putchar(*format);
				}
			}
			else
			{
				len += _putchar('%');
			}
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
