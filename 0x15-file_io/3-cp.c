#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFSIZE 1024

int error_exit(int code, const char *arg, int fd);

/**
 * error_exit - error handler
 * @code: code
 * @arg: char array
 * @fd: file descriptor
 * Return: int
 */
int error_exit(int code, const char *arg, int fd)
{
switch(code)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(code);
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
exit(code);
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
exit(code);
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(code);
default:
return (0);
}
}

/**
 * main - entry point
 * @argc: int
 * @argv: args
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFSIZE];

if (argc != 3)
error_exit(97, NULL, 0);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, argv[1], 0);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, argv[2], 0);

while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
error_exit(99, argv[2], 0);
}

if (bytes_read == -1)
error_exit(98, argv[1], 0);

if (close(fd_from) == -1)
error_exit(100, NULL, fd_from);

if (close(fd_to) == -1)
error_exit(100, NULL, fd_to);

return (0);
}
