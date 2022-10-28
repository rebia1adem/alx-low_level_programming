#include <unistd.h>

/**
 *
 *  * _putchar - writes the caracter
 *
 *   * @c: char to be printed
 *
 *    * Return: always 1 if success
 *
 *     */

int _putchar(char c)

{

		return (writes(1, &c, 1));

}
