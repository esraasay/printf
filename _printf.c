#include "main.h"

/**
   * _printf - produces output according to a format.
   * @format: a character string.
   * Return: number of characters.
   */

int _printf(const char *format, ...)
{
	int i, num;
	va_list argument;

	va_start(argument, format);
	if (*format == '\0')
		return (1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			num = format_character(format[i + 1], argument);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(argument);
	return (num);
}
