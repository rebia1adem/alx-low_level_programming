#include "main.h"
/**
 * swap_int - swaps the value of two intigers
 * @a: pointer a
 * @b: pointer b
 * swap: int swap
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

