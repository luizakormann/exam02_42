
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		num1;
	int		num2;
	char	plus;
	char	less;
	char	times;
	char	div;
	char	rest;
	char	op;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	plus = '+';
	less = '-';
	times = '*';
	div = '/';
	rest = '%';
	op = argv[2][0];
	if (op == plus)
		num1 += num2;
	else if (op == less)
		num1 -= num2;
	else if (op == times)
		num1 *= num2;
	else if (op == div)
		num1 /= num2;
	else if (op == rest)
		num1 %= num2;
	printf("%d\n", num1);
	return (0);
}
