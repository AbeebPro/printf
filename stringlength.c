#include "main.h"
/**
 * stringlength - the length of string
 * @s: the string input
 * Return: length of string
 */
int stringlength(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
