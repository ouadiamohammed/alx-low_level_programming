#include "main.h"

/**
 * check_sqrt - checks for square root of number.
 * @num: giving number.
 *@root: root to be checked.
 * Return: square root if the number has one or -1 if not.
 */

int	check_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (check_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number.
 *
 * Return: natural square root of number.
 */

int	_sqrt_recursion(int n)
{
	int	root = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	return (check_sqrt(n, root));
}
