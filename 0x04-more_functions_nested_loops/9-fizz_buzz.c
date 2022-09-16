#include <stdio.h>
/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int h;
	
	h = 1;
	printf("%d", h);
	for (h = 2; h <= 100; h++)
	{
		if ((h % 3 == 0) && (h % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((h % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((h % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", h);
		}
	}
	printf("\n");
	return (0);
}
