#include <stdio.h>

/**
 * before_main - Prints a specific message before
 * the main function is executed.
 * Return: nothing
 */
void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}

