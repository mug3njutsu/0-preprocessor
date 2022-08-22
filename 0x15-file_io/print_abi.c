#include <stdio.h>

/**
 * print_abi - prints the ABI version of an ELF header
 * @e_ident: *p -> [] containing the ELF ABI version.
 */

void print_abi(unsigned char *e_ident)
{
	printf("ABI Version: %d\n",
	    e_ident[EI_ABIVERSION]);
}
