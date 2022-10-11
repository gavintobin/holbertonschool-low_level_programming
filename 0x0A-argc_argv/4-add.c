#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 *@argc: counter
 *@argv:vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, val = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		val += atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
