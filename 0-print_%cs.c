#include "main.h"

/**
  * _printf - produces output according to a format.
  * @format: a character string.
  * Return: number of characters
  */

int _printf(const char *format, ...)
{
	int i;
	char c, *s;
	va_list argument;

	va_start(argument, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(argument, int);
				write(1, &c, 1);
				format++;
			}
			if (format[i + 1] == 's')
			{
				s = va_arg(argument, char*);
				write(1, s, strlen(s));
				format++;
			}
			if (format[i + 1] == '%')
			{
				write(1, &format[i], 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(argument);
	return (*format);
}
