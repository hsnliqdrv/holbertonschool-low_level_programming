#include "main.h"

/**
 * _sqrt_recursion - finds square root
 * @n: an integer
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	static int guess = 0;

	if (n < 0)
		return -1;
	if (guess * guess > n)
	{
		guess = 0;
		return -1;
	}
	if (guess * guess == n)
	{
		int result = guess;
		guess = 0;
		return result;
	}
	guess++;
	return _sqrt_recursion(n);
}
