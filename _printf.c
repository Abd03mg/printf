#include "main.h"

/**
 * _printf - fucntion that print formated text.
 * 
 * @format: input format.
 * Return: count of printed char.
*/

int _printf(const char *format, ...)
{
    int (*f)(va_list args);
    va_list args;
    int printed_c = 0, i;

    if (format == NULL || *format == '%' && *(format + 1) == (' ' || '\0'))
        return (-1);
    va_start(args, format);
    for ( ; *format != '\0' && *format; format++)
    {
        if (*format != '%')
        {   
            printed_c += _printchar(*format);
        }
        else
        {
            format++;
            if (*format == '%')
                _putchar('%');
            f = get_spec(*format);
            if (f)
                printed_c += f(args);
        }
    }
    va_end(args);
    return (printed_c);  
}
