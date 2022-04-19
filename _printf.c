#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _printf - implementation of printf function
 * @format: string
 * Return: length of characters
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	char *str, *dest;
	va_list ap;

	va_start(ap, format);
	dest = malloc((sizeof(char) * 1500));
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				dest[j] = (char)va_arg(ap, int);
				j++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(ap, char*);
				while (str[k])
				{
					dest[j] = str[k];
					j++;
					k++;
				}
			}
			else if (format[i] == '%')
			{
				dest[j] = '%';
				j++;
			}
		}
		else
		{
			dest[j] = format[i];
			j++;
		}
		i++;
	}
	write(1, dest, j);
	va_end(ap);
	free(dest);
	return (j);
}
