
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	if ((str[i] >= 48) || (str[i] <= 57))
	{
		while (str[i])
		{
			nb += str[i] - 48;
			if (str[i + 1] == '\0' || (str[i +1] <= 48) || (str[i + 1] >= 57))
				break ;
			nb *= 10;
			i++;
		}
}

	return (nb);
}

int main(void)
{
	const char	*str;

	str = "42l56";
	printf("%i", ft_atoi(str));
	return (0);
}
