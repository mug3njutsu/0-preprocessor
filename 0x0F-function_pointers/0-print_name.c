#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: str
 * @f: func
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
