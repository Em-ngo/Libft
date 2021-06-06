#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;
    int len;

    len = ft_strlen(s);
    dest = NULL;
    i = 0;
    if (!s)
	    return (NULL);
    dest = malloc(sizeof(char) * len + 1);
    if (!dest)
	    return (NULL);
    while (s[i])
    {
	    dest[i] = (*f)(i, (char)s[i]);
	    i++;
    }
    dest[i] = 0;
    return (dest);
}
