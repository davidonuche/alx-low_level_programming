#include "main.h"

/**
 * _isupper - check the code
 * @c: character to check
 * Return: always 0 (success)
 */

int _isupper(int c)
{
	c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
