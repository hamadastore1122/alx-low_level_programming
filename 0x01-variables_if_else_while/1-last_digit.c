#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0(Success)
 */
int main(void)
{
	int n;
	int m;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	m = n % 10;
	if (m > 5)
		printf("last digit of %d and is %d greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %d and is %d is 0\n", n, m);
	if ( m < 6 && m = 0)
		printf("last digit of %d and is %d less than 6 and not 0\n", n, m);
	return (0);
}
