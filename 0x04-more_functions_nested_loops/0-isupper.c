#include "main.h"

/**
 * _isupper - This checks for uppercase character.
 *
 * @c: character
 *
 * Return: 1 if c is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
