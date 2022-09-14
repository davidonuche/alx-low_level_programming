#include <stdio.h>

/**
 * main - Entry point
 * author: Davidbeebest
 * date: 14 sept 2022
 * Return: always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(s[i]);
	putchar('\n');
	return (0);
}
