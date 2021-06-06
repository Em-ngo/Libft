#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_tmp;
	char	*src_tmp;
	int	len_tmp;

	len_tmp = (int)len - 1;
	dst_tmp = (char*)dst;
	src_tmp = (char*)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src_tmp < dst_tmp)
		while (len_tmp >= 0)
		{
			dst_tmp[len_tmp] = src_tmp[len_tmp];
			len_tmp--;
		}
	else
		while (i < len)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	return ((void*)dst);
}
