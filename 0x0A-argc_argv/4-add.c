#include <stdio.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%\n", "Error");
			return (1);
		}
	}

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", sum);
	return (0);
}
