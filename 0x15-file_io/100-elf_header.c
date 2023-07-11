#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2MSB ? "big endian" : "little endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V" : "Other");
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %hu (0x%hx)\n", header->e_type, header->e_type);
	printf("Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_error("Error opening file");

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
		display_error("Error reading ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		display_error("Not an ELF file");

	display_elf_header(&header);

	close(fd);
	return 0;
}
