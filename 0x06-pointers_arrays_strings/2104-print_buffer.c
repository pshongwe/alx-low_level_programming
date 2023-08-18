#include "main.h"

void print_hex_address(unsigned int address);
void print_hex_byte(unsigned char byte);
void print_printable_char(char c);

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    for (i = 0; i <= (size - 1) / 10 && size; i++)
    {
        print_hex_address(i * 10);

        for (j = 0; j < 10; j++)
        {
            if (j + i * 10 >= size)
                _putchar(' ');
            else
                print_hex_byte(b[i * 10 + j]);

            if (j % 2 == 1)
                _putchar(' ');
        }

        for (j = 0; j < 10; j++)
        {
            if (j + i * 10 >= size)
                break;
            print_printable_char(b[i * 10 + j]);
        }

        _putchar('\n');
    }
    if (size <= 0)
        _putchar('\n');
}

/**
 * print_hex_address - Prints the hexadecimal representation of memory addresses.
 * @address: The memory address to print.
 */
void print_hex_address(unsigned int address)
{
    int shift;
    unsigned int mask, hex_digit;

    _putchar('0');
    _putchar('x');

    for (shift = 28; shift >= 0; shift -= 4)
    {
        mask = 0xFU << shift;
        hex_digit = (address & mask) >> shift;

        if (hex_digit < 10)
            _putchar(hex_digit + '0');
        else
            _putchar(hex_digit - 10 + 'a');
    }
}

/**
 * print_hex_byte - Prints the hexadecimal representation of a byte.
 * @byte: The byte to print.
 */
void print_hex_byte(unsigned char byte)
{
    unsigned char hex_digit;

    hex_digit = byte >> 4;
    hex_digit = hex_digit & 0x0F;

    if (hex_digit < 10)
        _putchar(hex_digit + '0');
    else
        _putchar(hex_digit - 10 + 'a');

    hex_digit = byte & 0x0F;

    if (hex_digit < 10)
        _putchar(hex_digit + '0');
    else
        _putchar(hex_digit - 10 + 'a');
}

/**
 * print_printable_char - Prints a printable character or '.' if not printable.
 * @c: The character to print.
 */
void print_printable_char(char c)
{
    if (c >= 32 && c <= 126)
        _putchar(c);
    else
	    _putchar('.');
}
