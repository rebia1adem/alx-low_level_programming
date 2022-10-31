#include "main.h"
/**
 * _strncat - concatinat two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0'
		return (dest);
}

