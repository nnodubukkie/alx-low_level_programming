#include <stdio.h>
/**
 * main - program that prints either number
 * or fizz or buzz or fizzBuzz
 *
 * Return: returns 0
 */
int main(void)
{
	int h = 1;

	while (h < 100)
	{
		if ((h % 3 == 0) && (h % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((h % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((h % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
