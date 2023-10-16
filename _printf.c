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
	char *sp = "csd";
	va_list args;

	va_start(args, format);
	if (!format || !format[i])
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
				len += _putchar('%');
			if (format[i + 1] == ' ')
				return (-1);
			i++;
			for (j = 0; j < 3; j++)
			{
				if (format[i] == *(sp + j))
					len += (get_spec(format[i]))(args);
				else
					return (-1);
			}
		}

		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);

	return (len);
}
