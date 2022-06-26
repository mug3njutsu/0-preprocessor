#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char thecharacter;
	int theinteger;
	long thelong;
	long thelonglong;
	int thefloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(thecharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(theinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(thelong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(thelonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(thefloat));

	return (0);
}