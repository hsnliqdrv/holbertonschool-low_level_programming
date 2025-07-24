#include <stdio.h>

/**
 * get - get digit at index
 * @a: number
 * @ind: index
 *
 * Return: digit at index
 */
int get(int a, int ind)
{
	int i = 0, t = 1;

	while (i < ind)
	{
		t *= 10;
		i++;
	}
	return (a / t % 10);
}
/**
 * pal - chekc if a is palindrome
 * @a: a number
 *
 * Return: 0 if not pal, 1 if pal
 */
int pal(int a)
{
	int l = 0, b = a, i = 0;

	if (b == 0)
		return (1);
	while (b > 0)
	{
		b /= 10;
		l++;
	}
	while (i < l / 2)
	{
		if (get(a, i) != get(a, l - i - 1))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - main function
 * Return: 1 if error 0 if success
 */
int main()
{
	int i, j, m = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			if (pal(i * j) && (i * j > m))
				m = i * j;
		}
	}
	printf("%d", m);
	return (0);
}
