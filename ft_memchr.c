#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	unsigned char	c_tmp;
	size_t		i;

	s_tmp = (unsigned char*)s;
	c_tmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] == c_tmp)
			return (&s_tmp[i]);
		i++;
	}
	return (NULL);
}
