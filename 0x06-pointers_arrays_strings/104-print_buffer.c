#include "main.h"

/**
* print_buffer - Prints the content of a buffer.
* @b: Pointer to the buffer to be printed.
* @size: The number of bytes to be printed from the buffer.
*
* Return: Nothing.
*/
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);

for (j = 0; j < 10; j++)
{
if (j + i * 10 >= size)
printf("  ");
else
printf("%02x", b[i * 10 + j]);

if (j % 2 == 1)
_putchar(' ');
}

for (j = 0; j < 10; j++)
{
if (j + i * 10 >= size)
break;
if (b[i * 10 + j] >= 32 && b[i * 10 + j] <= 126)
_putchar(b[i * 10 + j]);
else
_putchar('.');
}

_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
