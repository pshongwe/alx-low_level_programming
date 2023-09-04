#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - read file to standard output
 * @filename: file pointer
 * @letters: numbers of chars to read
 * Return: number of chars read or -1 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (-1);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (-1);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (-1);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

close(fd);
free(buffer);

if (bytes_written == -1 || bytes_written != bytes_read)
return (-1);

return (bytes_written);
}
