#include "main.h"
/**
 * _strcat - a function concatinate the string
 * @dest: the first parameter
 * @src: the second parameter
 * Return: reterns the concatinating string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = scr[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
