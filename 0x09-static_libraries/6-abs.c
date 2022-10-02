#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: integer to check
 * author: oludami08
 * date sept 2022
 * Return: 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
