#include <stdio.h>
#include <unistd.h>

/**
 * largest_prime_factor - prototype function
 * Description: To serve as a reference for the main
 * @p: the number whose largest prime factor we are to find and print
 * Return: 0 Always (success)
 */
long int largest_prime_factor(long int p);

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/**
 * largest_prime_factor - prototype function
 * Description: To serve as a reference for the main
 * @p: the number whose largest prime factor we are to find and print
 * Return: 0 Always (success)
 */
long int largest_prime_factor(long int p)
{
	int f;

	f = 2;
	for (; f >= 2 && f < p; f++)
	{
		if (f == 2)
		{
			while (p % f == 0)
			{
				p = p / f;
			}
		}
		else if (f % 2 != 0 || f % 5 != 0)
		{
			while (p % f == 0)
			{
				p = p / f;
			}
		}
		else
		{
			continue;
		}
	}
	printf("%ld\n", p);
	return (0);
}
