#include <stdio.h>
#include <stdlib.h>

/**
 * factorize - function that prints out the
 * two smallest factors of an integer
 * @n: integer to be factorized.
*/

void factorize(unsigned long long int n)
{
	for (unsigned long long int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%llu=%llu*%llu\n", n, n / i, i);
			break;
		}
	}
}

/**
 * main - our program's entry point.
 * @argc: number of commandling arguments including the filename
 * @argv: array of character pointers listing all the arguments
 * Return: Always 0.
*/

int main(int argc, char **argv)
{
	if (argc > 2 || argc < 2)
		fprintf(stderr, "Usage: ./factors <file>\n");

	FILE *fac_file;

	fac_file = fopen(argv[1], "r");

	unsigned long long int finput = 0;

	while (fscanf(fac_file, "%llu", &finput) != EOF)
	{
		factorize(finput);
	}

	fclose(fac_file);

	return (0);
}
