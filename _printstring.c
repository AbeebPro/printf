#include "main.h"
/**
 * _printstring - prints string
 * @s: string to print
 * Return: 0
 */
int _printstring(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);

}
