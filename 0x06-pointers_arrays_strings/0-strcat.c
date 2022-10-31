#include "main.h"
/**
 * _strcat - a function concatinate the string
 * @dest: the first parameter
 * @src: the second parameter
 * Return: reterns the concatinating string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = scr[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
