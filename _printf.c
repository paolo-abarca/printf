#include "main.h"

/**
 * _printf - My own printf function
 * @format: argument pointer 0
 * Return: returning the length of each string
 */

int _printf(const char *format, ...)
{
	int i, j;
	int string_value = 0;

	mod_t mod[] = {
		{"c", char_mod}, {"s", string_mod}, {NULL, NULL}
		};

	va_list parameters;

	va_start(parameters, format);

	if (format == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			for (j = 0; mod[j].p != NULL; j++)
			{
				if (format[i + 1] == mod[j].mod[0])
				{
					string_value = string_value + mod[j].p(parameters);
					i++;
				}
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			string_value = string_value + 1;
		}
		else
		{
			_putchar(format[i]);
			string_value = string_value + 1;
		}
	}
	va_end(parameters);

	return (string_value);
}
