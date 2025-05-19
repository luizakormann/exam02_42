
#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	slen;
	int	i;
	char	cpy;

	slen = 0;
	i = 0;
	while (str[slen])
		slen++;
	slen--;
	while (i < slen)
	{
		cpy = str[i];
		str[i] = str[slen];
		str[slen] = cpy;
		i++;
		slen--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "abc";

	printf("b4 ft: %s\n", str);
	ft_strrev(str);
	printf("after ft: %s\n", str);
	return (0);
}
