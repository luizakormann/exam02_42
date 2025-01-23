#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int		i;

	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		i = 0;
		string = argv[1];
		while (string[i])
		{
			write (1, &string[i++], 1);
			if (string[i] == 32 || string[i] == '\t')
                                break ;
		}
		write (1, "\n", 1);
	}
	return (0);
}
