#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factorize(long long n);

/**
 * factorize - function prints the two smallest factors of a given number.
 * @n: represents the number to be factorized.
 */
void factorize(long long n)
{
	/* variables to store the factors */
	long long p, q;
  
	/* find the smallest factor of n  starting from 2*/
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{

			/* means i is a factor of n
			 * assign the factor to p and the quotient to q */
			p = i;
			q = n / i;
			/* check if p is larger than q and if true swap them */
			if (p > q)
			{
				long long temp = p;
				p = q;
				q = temp;
			}

		printf("%lld=%lld*%lld\n", n, p, q);
		return;
		}
	}
	/* if n is prime, print n and 1 as its prime factor */
	printf("%lld=%lld*%d\n", n, n, 1);
}

/**
 * main - the main function
 * @argc: number of arguments
 * @argv: argument
 * Return: 0 always success, otherwise 1, 2
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		exit(1);
	}

	/* open the file and read */
	FILE *f = fopen(argv[1], "r");
	if (f == NULL)
	{
		printf("Error: cannot open file %s\n", argv[1]);
		exit(2);
	}

	/* store each number each number in number var */
	long long number;
	/* read each number throughout the file */
	while (fscanf(f, "%lld", &number) == 1)
	{
		/* factorize the numbers */
		factorize(number);
	}

	/* close the file */
	fclose(f);
	return (0);
}
