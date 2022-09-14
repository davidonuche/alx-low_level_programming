#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: type integer
 * description: print 0, 1 or -1 depending on the argument passed
 * author: oludami08
 * date: 13 sept 2022
 * Return: 1 and print + if n is greater than o
 * 0 and print 0 if n is zero
 * -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
