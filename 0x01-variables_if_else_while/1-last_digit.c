#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of randomly generated number
 *
 * Description: This program will assign a random
 * number to variable of n
 * Return: 0
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
