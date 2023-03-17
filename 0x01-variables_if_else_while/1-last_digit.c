#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - read Description
 *
 * Description: This program will assign a random number
 *    to the variable n each time it is executed.
 *    The output of the program should be:
 *    The string Last digit of, followed by
 *    n, followed by
 *    the string is, followed by
 *    if the last digit of n is greater than 5:
 *             the string and is greater than 5
 *    if the last digit of n is 0: the string and is 0
 *    if the last digit of n is less than 6 and not 0:
 *             the string and is less than 6 and not 0
 *    followed by a new line
 * Return: it returns 0 upon seccessful completion.
 */
int	main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if ((n % 10) > 5)
		printf("%d and is greater than 5\n", n % 10);
	else if ((n % 10) == 0)
		printf("%d and is 0\n", n % 10);
	else
		printf("%d and is less than 6 and not 0\n", n % 10);
	return (0);
}
