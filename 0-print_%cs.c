#include "main.h"

/**
  * format_character - check character after %.
  * @ch: a character or string.
  * @argument: argument will pass.
  * Return: number of characters
  */

int format_character(char ch, va_list argument)
{
	int c, num = 0;
	char *s;

	if (ch == 'c')
	{
		c = va_arg(argument, int);
		write(1, &c, 1);
		num++;
	}
	else if (ch == 's')
	{
		s = va_arg(argument, char*);
		if (s == NULL)
		{
			s = "";
		}
		write(1, s, strlen(s));
		num += strlen(s);
	}
	else
		{
		write(1, &ch, 1);
		num++;
		}
	return (num);
}
