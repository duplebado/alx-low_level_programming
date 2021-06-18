#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *  main - Random number generator
 *  Description - It generates a random numbers
 *  Return - Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n < 0)
	{
		printf("%d is negative\n", n);
	} else {
		printf("%d is positive\n", n);
	}	
	return (0);
}
