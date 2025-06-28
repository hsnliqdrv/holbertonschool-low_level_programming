#include "main.h"

/**
 * prime_helper - help primes
 * @n: number
 * @d: divider
 *
 * Return: 1 if prime else 0
 */
int prime_helper(int n, int d)
{
	if (d >= n / 2)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime_helper(n, d + 1));
}
/**
 * is_prime_number - if input is prime
 * @n: number
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
