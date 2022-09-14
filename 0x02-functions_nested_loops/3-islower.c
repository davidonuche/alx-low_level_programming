#include "main.h"

/**
 * _islower - check for lower case characters
 * @c: char type letter
 * author: oludami08
 * date: 13 sept 2022
 * Return: 1 if character is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
