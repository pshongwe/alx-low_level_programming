#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void print_magic(Elf64_Ehdr *header)
{
int i;

printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header->e_ident[i]);
if (i < EI_NIDENT - 1)
printf(" ");
else
printf("\n");
}
}

void print_class(Elf64_Ehdr *header)
{
printf("Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
}
}

void print_data(Elf64_Ehdr *header)
{
printf("Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("<unknown>\n");
}
}

void print_version(Elf64_Ehdr *header)
{
printf("Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
}

void print_os_abi(Elf64_Ehdr *header)
{
printf("OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Sun Solaris\n");
break;
case ELFOSABI_AIX:
printf("IBM AIX\n");
break;
case ELFOSABI_IRIX:
printf("SGI Irix\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("Compaq TRU64 UNIX\n");
break;
case ELFOSABI_MODESTO:
printf("Novell Modesto\n");
break;
case ELFOSABI_OPENBSD:
printf("OpenBSD\n");
break;
default:
printf("<unknown>\n");
}
}

void print_abi_version(Elf64_Ehdr *header)
{
printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
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
