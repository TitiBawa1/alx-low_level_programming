#include "main.h"

/**
 * print_rev - prints a reverse string
 *
 * @s: string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; inde++)
		;
	for (index = index - l; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}


