#include <stdio.h>
#include "../main.h"
/**
 * main - check code
 * Return: Always 0 (success)
 */
int main(void)
{
	int len, len2;

	len = _printf("aabc%c\n", 'A');
	len2 = printf("aabb%c\n", 'A');
	printf("%d\n", len);
	printf("%d\n", len2);
	return (0);
}
