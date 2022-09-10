#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dare;

	for (dare = 'a'; dare <= 'z'; dare++)
	{
		if (dare != 'q' && dare != 'e')
			putchar(dare);
	}
	putchar('\n');
	return (0);
}
