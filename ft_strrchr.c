#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_tmp;
	int		len;

	len = ft_strlen(s);
	c_tmp = (const char)c;
	while (len)
	{
		if (s[len] == c_tmp)
			return ((char*)&s[len]);
		len--;
	}
	if (s[0] == c_tmp)
		return ((char*)&s[len]);
	return (NULL);
}
