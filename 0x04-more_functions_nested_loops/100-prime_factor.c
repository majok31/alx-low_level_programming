#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the given number
 */
long largest_prime_factor(long num)
{
    long factor = 2;

    while (factor * factor <= num)
    {
        if (num % factor == 0)
            num /= factor;
        else
            factor++;
    }
    
    return num;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    long number = 612852475143;
    long largest_factor = largest_prime_factor(number);

    printf("%ld\n", largest_factor);

    return 0;
}

