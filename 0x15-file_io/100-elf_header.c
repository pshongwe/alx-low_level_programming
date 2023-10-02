#include "main.h"

void print_abi_version(Elf64_Ehdr *header)
{
printf("ABI Version:                       %d\n",
header->e_ident[EI_ABIVERSION]);
}

void print_type(Elf64_Ehdr *header)
{
printf("Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
}
}

void print_entry_point(Elf64_Ehdr *header)
{
printf("Entry point address:               0x%lx\n", header->e_entry);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
print_magic(header);
print_class(header);
print_data(header);
print_version(header);
print_os_abi(header);
print_abi_version(header);
print_type(header);
print_entry_point(header);
}

int main(int argc, char *argv[])
{
const char *elf_filename = argv[1];
int fd = open(elf_filename, O_RDONLY);
Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", elf_filename);
return (98);
}

if (bytes_read == -1)
{
fprintf(stderr, "Error: Can't read file %s\n", elf_filename);
close(fd);
return (98);
}

if (bytes_read != sizeof(header)
|| memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Error: %s is not an ELF file\n", elf_filename);
close(fd);
return (98);
}

print_elf_header_info(&header);

close(fd);
return (0);
}
