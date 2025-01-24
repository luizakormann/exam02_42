#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	num;
	int	div;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num == 1)
	{
		printf("%d", num);
		return (0);
	}
	div = 2;
	while (div <= num)
	{
		if (num % div == 0)
		{
			printf("%d", div);
			if (num == div)
				{
					printf("\n");
					break ;
				}
			printf("*");
			num /= div;
			div = 1;
		}
		div++;
	}
}
