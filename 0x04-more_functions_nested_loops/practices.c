#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

long int largest_prime_factor(long int p);
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/* Description goes here */
long int largest_prime_factor(long int p)
{
	int f;
	long int h = p;

	f = 2;
	for (;f >= 2 && f < p; f++)
	{
		if (f == 2)
		{
			while (p % f == 0)
			{
				p = p / f;
				printf("%d is one of the prime factors of %ld\n", f, h);
			}
		}
		else if (f % 2 != 0 || f % 5 != 0)
		{
			while (p % f == 0)
			{
				p = p / f;
				printf("%d is one of the prime factors of %ld\n", f, h);
			}
		}
		else
		{
			continue;
		}
		
	}
	printf("%ld is the largest prime factor of %ld\n", p, h);
	return (0);
}
