#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
