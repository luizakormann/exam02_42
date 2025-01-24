#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_positive(int n1, int n2)
{
	if (n1 < 0 || n2 < 0)
		return (0);
	else
		return (1);
}

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;
	int	den;

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (!&is_positive)
		return (0);
	if (n1 > n2)
		den = n1;
	else
		den = n2;
	while (den >= 1)
	{
		if (n1 % den == 0 && n2 % den == 0)
		{
			printf("%d\n", den);
			break ;
		}
		den--;
	}
	return (0);
}
