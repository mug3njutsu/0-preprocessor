#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	int i;

	for(i = 0; *s[i] != "\0"; i++);

	printf(i);
}
