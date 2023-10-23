#include "main.h"

/**
 * _islower - This checks for lowercase characters.
 *
 * @c:The  character to be checked
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
