#include "main.h"
/**
 * print_last_digit - the last digit
 * @n: integer to check
 * author: oludami08
 * date 13 sept 2022
 * Return: 0 always for sucess
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
