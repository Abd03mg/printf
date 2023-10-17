#include "main.h"

/**
 * get_spec - pointer to function that return
 * correct function to specific specifier.
 *
 * @c: specifier.
 * Return: function.
 */

int (*get_spec(char c))(va_list args)
{
	spec_t sp[] = {
		{'s', print_str},
		{'c', print_char},
		{'d', print_dec},
		{'i', print_dec},
		{'b', print_bin}
	};
	int i = 0;

	while (i < 6)
	{
		if (sp[i].c == c)
			return (sp[i].f);
		i++;
	}
	return (0);
}
