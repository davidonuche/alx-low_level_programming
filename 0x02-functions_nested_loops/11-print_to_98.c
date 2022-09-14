#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: character to check
 * author:oludami08
 * date: 13 sept 2022
 */

void print_to_98(int n)
{

	if (n > 98)
	{

		while (n > 98)

			printf("%d, ", n--);

		printf("%d\n", n);

	}
	else
	{

		while (n < 98)

			printf("%d, ", n++);

		printf("%d\n", n);

	}

}
