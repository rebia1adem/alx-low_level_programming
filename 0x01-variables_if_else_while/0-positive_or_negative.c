#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starts the program
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf(n, "%d is positive\n");
		else if (n < 0)
			printf(n, "%d is negative\n");
		else
			printf(n, "%d is zero");
		return (0);
}
