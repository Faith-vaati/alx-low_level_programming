#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * @brief Entry point of the program.
 *
 * This program performs XYZ operations and produces XYZ output based on user input.
 * It showcases the usage of XYZ functionality and provides XYZ results.
 * Refer to the source code comments for detailed explanations.
 *
 * @return 0 on successful execution, non-zero value on error.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
