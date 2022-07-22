#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply the args
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for successful exit
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
