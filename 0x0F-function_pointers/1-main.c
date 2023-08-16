#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &array_iterator);
    array_iterator(array, 5, &array_iterator);
    return (0);
}
