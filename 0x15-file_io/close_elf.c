#include <stdlib.h>
#include <stdio.h>

/**
 * close_elf - closes an ELF file
 * @elf: file descriptor of the ELF file
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
