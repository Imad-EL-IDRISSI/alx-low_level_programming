#include"main.h"

/**
 * is_prime_number - function that verify if an num is prime or not.
 *
 * @n: the num we want to check if it is prime or not.
 * 
 * Return: 0 if prime, 1 otherwise.
 */

int is_prime_number(int n)
{
    return (is_prime_helper(n, n / 2));
}

/**
 * is_prime_helper - Helper function to check primality using recursion.
 * @n: The number to be checked for primality.
 * @divisor: The current divisor being checked.
 *
 * Return: (1) if the number is prime, (0) otherwise.
 */
int is_prime_helper(int n, int divisor)
{
    if (n <= 1)
        return (0); /* 0 and 1 are not prime numbers */

    if (divisor == 1)
        return (1); /* 2 and 3 are prime numbers */

    if (n % divisor == 0)
        return (0); /* The number is divisible, not prime */

    return (is_prime_helper(n, divisor - 1));
}
