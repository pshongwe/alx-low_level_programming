#ifndef MAIN_H
#define MAIN_H

/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/* functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_magic(Elf64_Ehdr *header);
void print_class(Elf64_Ehdr *header);
void print_data(Elf64_Ehdr *header);
void print_version(Elf64_Ehdr *header);
void print_os_abi(Elf64_Ehdr *header);
void print_abi_version(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entry_point(Elf64_Ehdr *header);
void print_elf_header_info(Elf64_Ehdr *header);

#endif /* MAIN_H */
