#include "main.h"

/**
 * print_alphabet - Prints letters of the alphabet in lowercase
 *
 * Return: void
 *
 */

char print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
