#include "main.h"

/**
   * _printf - produces output according to a format.
   * @format: a character string.
   * Return: number of characters.
   */

int _printf(const char *format, ...)
{
	int i;
	const char *ptr = format;
	va_list argument;

	va_start(argument, format);
	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == '%')
		{
			format_character(ptr[i + 1], argument);
			i++;
		}
		else
		{
			write(1, &ptr[i], 1);
		}
	}
	va_end(argument);
	return (i);
}
