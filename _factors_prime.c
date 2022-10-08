#include "main.h"

/**
 * factorize_prime - function that prints out the 
 * two smallest prime factors of an integer
 * @n: integer to be factorized, assumed to be the
 * product of two prime numbers.
*/

void factorize_prime(unsigned long long int n)
{
	for (unsigned long long int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (is_prime(n / i) && is_prime(i))
            {
                printf("%llu=%llu*%llu\n", n, n / i, i);
                break;
            }
		}
	}
}