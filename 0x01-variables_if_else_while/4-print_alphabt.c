#include <stdio.h>
/**
 * main - prints lowercase alphabet excepr q and e
 * Return: Always (0) sucess
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')

	{
		putchar (c);
	}
	}
		putchar ('\n');

	return (0);
}

