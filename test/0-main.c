#include <stdio.h>
#include "main.h"
/**
 * main - check code
 * Return: Always 0 (success)
 */
int main(void)
{
	int len, len2;

	len = _printf("aabc%s%c%%\n", "hello", 'c');
	len2 = printf("aabb%s%c%%\n", "hello", 'c');
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
