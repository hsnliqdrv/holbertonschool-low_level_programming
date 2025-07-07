#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, anything else if error
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		puts("Error");
		return (99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && b == 0)
	{
		puts("Error");
		return (100);
	}
	printf("%d\n", op(a, b));
	return (0);
}
