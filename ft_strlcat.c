#include "libft.h"

size_t    ft_strlcat(char *d, const char *s, size_t size)
{
	size_t    i;
	size_t    j;
	size_t	tmp;

	j = 0;
	i = ft_strlen(d);
	tmp = ft_strlen(d);
	while (s[j] && (j + tmp < size - 1) && size != 0)
	{
		d[i] = s[j];
		i++;
		j++;
	}
	d[i] = '\0';
	if (tmp >= size)
		return (ft_strlen(s) + size);
	else
		return (ft_strlen(s) + tmp);
}
