#include "main.h"

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
