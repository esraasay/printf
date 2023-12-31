#include "main.h"
/**
 * format_di - print int.
 * @c: the integer to print.
 * @argument: list of argument.
 * Return: Number.
 */
int format_di(char c, va_list argument)
{int d, i, digit = 0, digits[10], num_digits = 0;

	if (c == 'd' || c == 'i')
	{
		d = va_arg(argument, int);
		if (d < 0)
		{
			write(1, "-", 1);
			d = -d;
		}
		if (d == 0)
	{
			digit = '0';
			write(1, &digit, 1);
	}
	else
	{
			while (d > 0)
			{
				digits[num_digits] = d % 10;
				d /= 10;
				num_digits++;
			}
				for (i = num_digits - 1; i >= 0; i--)
			{
					digit = digits[i] + '0';
					write(1, &digit, 1);
			}
	}
	}
	return (d);
}
