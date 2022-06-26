#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char chrs[] = "echo and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
    write(1, chrs, sizeof(chrs));
	return (1);
}
