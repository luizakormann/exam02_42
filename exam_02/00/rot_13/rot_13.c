#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		reps;

	if (argc != 2 || argv[1] == NULL)
	{
		write (1, "\n", 1);
		return (0);
	}
	str = argv[1];
	i = 0;
	reps = 0;
	while (str[i])
	{
		while (reps < 13)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				if ((str[i] + 1 >= '[' && str[i] <= '`') || (str[i] + 1 >= '{'))
					str[i] -= 26;
				str[i] += 1;
			}
			reps++;
		}
		write (1, &str[i], 1);
		i++;
		reps = 0;
	}
	write (1, "\n", 1);
	return (0);
}
