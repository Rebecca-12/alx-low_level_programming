#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_elf_header - Prints information from ELF header.
* @header: Pointer to the ELF header structure.
*/

void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", get_osabi_name(header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", get_type_name(header->e_type));
	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
* get_osabi_name - Returns the OS/ABI name based on the given identifier.
* @osabi: The OS/ABI identifier.
*
* Return: A string representing the OS/ABI name.
*/

const char *get_osabi_name(unsigned char osabi)
{
    switch (osabi)
    {
	case ELFOSABI_SYSV: return "UNIX - System V";
	case ELFOSABI_HPUX: return "UNIX - HP-UX";
	case ELFOSABI_NETBSD: return "UNIX - NetBSD";
	case ELFOSABI_LINUX: return "UNIX - Linux";
        /* Add more cases as needed */
	default: return "Unknown";
    }
}

/**
* get_type_name - Returns the ELF type name based on the given identifier.
* @type: The ELF type identifier.
*
* Return: A string representing the ELF type name.
*/

const char *get_type_name(uint16_t type)
{
    switch (type)
    {
	case ET_NONE: return "NONE (No file type)";
	case ET_REL: return "REL (Relocatable file)";
	case ET_EXEC: return "EXEC (Executable file)";
	case ET_DYN: return "DYN (Shared object file)";
	case ET_CORE: return "CORE (Core file)";
        /* Add more cases as needed */
	default: return "Unknown";
    }
}

/**
* main - Entry point of the program.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
*
* Return: 0 on success, or an error code on failure.
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
        	return (2);
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		perror("Error reading file");
		close(fd);
		return (3);
	}

	if (bytes_read != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Incomplete ELF header\n");
		close(fd);
		return (4);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
