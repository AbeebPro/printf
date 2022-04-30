#include "main.h"

int _print_int(int n)
{

    int digit = 0, n2 = 0, sign = 1, i = 0;

    if (n < 0)
        sign = -1;
    n *= sign;

    while (n > 0)
    {
        digit = n % 10;
        n2 = n2 * 10 + digit;
        n /= 10;
    }

    n = n2;

    if (sign == -1)
    {
        _putchar('-');
	i = 1 + 1;
    }
        
    while (n > 0)
    {   
        digit = n % 10;
        _putchar('0' + digit);
	i++;
        n /= 10;
    }

    return (i);
}
