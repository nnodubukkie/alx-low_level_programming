#include <stdio.h>
/**
 * main - write a program that prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sz;
	int str[] = {45, 112, 117, 116, 99, 104, 97, 114};

	sz = sizeof(str) / sizeof(int);
	for (i = 0; i < sz; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');	
	return (0);
}
