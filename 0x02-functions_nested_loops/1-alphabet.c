 #include "main.h"

/**
 * print_alphabet - function to print letter a to z
 * main - Entry point
 * author: oludami08
 * date: 12 sept 2022
 * Return: always 0 (0)
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
