#include <stdarg.h>
#include "main.h"
/**
 * _printf - implementation of printf function
 * @format: string
 * Return: length of characters
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(ap, int));
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(ap, char*);
				_printstring(str);
				count += stringlength(str);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);

	va_end(ap);
}
