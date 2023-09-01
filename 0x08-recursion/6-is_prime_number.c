/**
* is_prime_number - Checks if an integer is prime.
* @n: The integer to check.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	return 0; // 0 and 1 are not prime numbers
	return is_prime_recursive(n, 2); // Start with divisor 2
}

/**
* is_prime_recursive - Helper function for is_prime_number.
* @n: The integer to check for primality.
* @divisor: The current divisor to test.
* Return: 1 if n is prime, 0 otherwise.
*/

int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
        return 1; // n is prime
	if (n % divisor == 0)
	return 0; // n is divisible by divisor, not prime
	return is_prime_recursive(n, divisor + 1); // Check next divisor
}
