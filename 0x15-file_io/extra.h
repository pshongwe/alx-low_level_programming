#ifndef EXTRA_H
#define EXTRA_H

/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_os_abi(Elf64_Ehdr *header);
void print_abi_version(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entry_point(Elf64_Ehdr *header);
void print_elf_header_info(Elf64_Ehdr *header);

/**
 * print_magic - Prints the magic bytes from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
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

/**
 * print_class - Prints the ELF file class from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
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

/**
 * print_data - Prints the data encoding (endianness) from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
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

/**
 * print_version - Prints the ELF file version from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_version(Elf64_Ehdr *header)
{
printf("Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
}

/**
 * print_os_abi - Prints the operating system/ABI from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
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

#endif
