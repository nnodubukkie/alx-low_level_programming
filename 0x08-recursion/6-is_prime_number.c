#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * if the number is not divisible - 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}