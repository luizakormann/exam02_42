#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	if (!src)
		return (NULL);
	dup = malloc(sizeof(src));
	i = 0;
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
