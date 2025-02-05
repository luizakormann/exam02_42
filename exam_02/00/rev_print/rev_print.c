#include <unistd.h>

char	*rev_print(char *str)
{
	char	*cpy;
	int		i;
	int		len;

	cpy = str;
	len = 0;
	i = 0;

	while (cpy[len] != '\0')
		len++;
	while (len)
	{
		write(1, &str[len], 1);
		len--;
	}
	write (1, &str[i], 1);
	return (cpy);
}
