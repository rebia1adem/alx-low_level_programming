#include "main.h"
#include <stdio.h>
/**
 * main - start to the program
 * reset_to_98 - takes a pointer to an int as parameter and updates the value
 * @n -  updates the value it points to to 98
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
void reset_to_98(int *n)
{
	*n = 98;

	return (0);
}
