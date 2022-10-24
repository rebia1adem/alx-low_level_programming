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
	int lasdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasdigi = n % 10;
	if (lasdigi > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lasdigi);
	else if (lasdigi == 0)
		printf("Last digit of %d is %d and is zero\n", n, lasdigi);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdigi);
	return (0);
}
