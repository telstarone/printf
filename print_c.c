#include "main.h"

/**
 * print_c - Prints a character.
 * @list: A va_list pointing to the character to print.
 *
 * Return: function pointer to function matched by symbol
 */
void print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);

	write(1, &ch, 1);
}