#include <stdio.h>
#include "main.h"
/**
 * main - check code
 * Return: Always 0 success
 */
int main(void)
{
	int len, len2;

	len = _printf("aabb%c%c%s%%\n", 'A', 'A', "Hello");
	len2 = printf("aabb%c%c%s%%\n", 'A', 'A', "Hello");
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
