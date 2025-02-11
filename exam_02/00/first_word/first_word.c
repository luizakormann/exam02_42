#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		i = 0;
		str = argv[1];
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
