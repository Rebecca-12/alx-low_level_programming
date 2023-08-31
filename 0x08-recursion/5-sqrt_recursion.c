#include "main.h"

int sqrt_recursive_helper(int n, int guess);

/**
* _sqrt_recursion - Calculates the natural square root of a number
* @n: The number to calculate the square root of
* Return: The natural square root of n, or -1 if not found
*/

int _sqrt_recursion(int n)
{
	return (sqrt_recursive_helper(n, 1));
}

/**
* sqrt_recursive_helper - Recursive helper function to find square root
* @n: The number to calculate the square root of
* @guess: The current guess for the square root
* Return: The natural square root of n, or -1 if not found
*/

int sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (sqrt_recursive_helper(n, guess + 1));
}
