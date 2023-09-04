#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text
 * to the end of a file.
 * @filename: Name of the file to which
 * text will be appended.
 * @text_content: A NULL-terminated string to add
 * at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_len = 0;

if (filename == NULL || text_content == NULL)
return (-1);

while (text_content[text_len])
text_len++;

fd = open(filename, O_WRONLY | O_APPEND, 0664);
if (fd == -1)
return (-1);
bytes_written = write(fd, text_content, text_len);
close(fd);

if (bytes_written == -1)
return (-1);

return (1);
}
