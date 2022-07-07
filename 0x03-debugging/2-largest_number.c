#include "main.h"

/**
* main - returns the largest of 3 numbers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

a = 0;
b = -30;
c = -100;

largest = largest_number(a, b, c);

printf("%d is the largest number\n", largest)

return (0);
}
