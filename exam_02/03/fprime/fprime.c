#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int	n;
	unsigned int	div;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	n = atoi(argv[1]);
	div = 2;
	if (n == 1)
		printf("1");
	while (div <= n)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (n == div)
				break ;
			printf("*");
			n /= div;
			div = 1;
		}
		div++;
	}
	printf("\n");
	return (0);
}
