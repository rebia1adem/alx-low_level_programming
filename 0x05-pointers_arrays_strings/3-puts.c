#include "main.h"
/**
 * _puts - string print
 * @str: string values
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
