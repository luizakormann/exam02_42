
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int		num_sts;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	num_sts = 1;
	//str = argv[num_sts];
	//printf("argc: %d, num_sts:%d\n", argc, num_sts);
	//printf("%s\n", argv[1]);
	while (argv[num_sts])
	{
		while (argv[num_sts][i])
		{
			if ((argv[num_sts][i] >= 65 && argv[num_sts][i] <= 90))
				argv[num_sts][i] += 32;
			if ((argv[num_sts][i + 1] <= 13) || argv[num_sts][i + 1] == 32)
			{
				if ((argv[num_sts][i] >= 97 && argv[num_sts][i] <= 122))
					argv[num_sts][i] -= 32;
			}
			write(1, &argv[num_sts][i], 1);
			i++;
		}
		write(1, "\n", 1);
		num_sts++;
		i = 0;
	}
	return (0);
}
