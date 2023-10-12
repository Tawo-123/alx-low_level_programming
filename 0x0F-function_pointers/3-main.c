#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if successful, 98, 99, or 100 for error cases
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
