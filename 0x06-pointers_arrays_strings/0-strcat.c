#include <stdio.h>

/**
 * _strcat - A funtion that concatenates two strings
 * @dest: input value(s)
 * @src: input value(s)
 *
 * Return: Void
 *
 */

char *_strcat(char *dest, char *src);
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
