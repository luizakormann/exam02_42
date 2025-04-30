
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	sig;

	nb = 0;
	i = 0;
	sig = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		if ((str[i + 1] <= 47) || (str[i + 1] >= 58))
			return (nb);
		else
		{
			sig *= -1;
			i++;
		}
	}
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

	return (nb * sig);
}

int main(void)
{
	const char	*str;

	str = "    	- 42l56";
	printf("%i\n", ft_atoi(str));
	printf("%i", atoi(str));
	return (0);
}
