include "main.h"

/**
* is_prime_number - Checks if an integer is prime.
* @n: The integer to check.
* Return: 1 if n is prime, 0 otherwise.
*/


int is_prime_number(int n)
{
	/* Base Cases */
	if (n <= 1)
	return 0;
	if (n == 2)
	return 1;

	return is_prime_recursive(n, 2); /* Start recursion with divisor 2 */
}

/**
* is_prime_recursive - Helper function for is_prime_number.
* @n: The integer to check for primality.
* @divisor: The current divisor to test.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime_recursive(int n, int divisor)
{

/* Base Case: If divisor reaches the square root of n, it's prime */

	if (divisor * divisor > n)
	return 1;

/* If n is divisible by the current divisor, it's not prime */
	if (n % divisor == 0)
		return 0;

/* Recursively check the next divisor */

	return is_prime_recursive(n, divisor + 1);
}
