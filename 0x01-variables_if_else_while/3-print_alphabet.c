#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case
 * Return: Always (0) sucess
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar (c);
	}
	{
		putchar ('\n');
	}

	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar (c);
	}
	{
		putchar ('\n');
	}
	return (0);
}

