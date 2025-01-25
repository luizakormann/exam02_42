#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char    *str;
    int     size;
	int		i;
	char	*res;
	int		j;

    if (argc != 2 || argv[1] == NULL)
    {
        write (1, "\n", 1);
        return (0);
    }
    str = argv[1];
	size = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		size++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			size++;
		i++;
	}
	res = malloc(size + 1);
	i = 0;
	while (str[i])
		res[j++] = str[i++];
	j = 0;
	while (res[j])
	{
		if (res[j] >= 'A' && res[j] <= 'Z')
		{
			res[j] -= 32;
			while (size > j)
				res[size] = res[size - 1];
			res[j] = '_';
		}
		j++;
	}
	printf("%s", res);
	return (0);
}
