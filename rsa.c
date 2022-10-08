#include "main.h"

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

	fscanf(fac_file, "%llu", &finput);
	factorize_prime(finput);
	fclose(fac_file);

	return (0);
}
