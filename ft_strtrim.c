#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t    i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int	is_charset(char c, const char *str)
{
	int    i;

    i = 0;
    while (str[i])
    {
	    if (c == str[i])
		return (1);
	i++;
    }
    return (0);
}

int    start_index(const char *s1, const char *set)
{
	int    i;

	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	return (i);
}

int	end_index(const char *s1, const char *set)
{
	int	end;
	size_t	s1_len;

	end = 0;
	s1_len = ft_strlen((char *)s1);
	while (is_charset(s1[s1_len - end - 1], set))
		end++;
	return (s1_len - end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int	start;
	int	end;

	if (!s1)
		return (0);
	start = start_index(s1, set);
	if (start >= (int)ft_strlen(s1))
		return ("\0");
	end = end_index(s1, set);
	dest = (char *)malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest = ft_strncpy(dest, s1 + start, end - start);
	dest[end - start] = '\0';
	return (dest);
}
