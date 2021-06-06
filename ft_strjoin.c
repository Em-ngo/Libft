/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:00:51 by engo              #+#    #+#             */
/*   Updated: 2021/05/27 16:19:18 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char const *s1, char const *s2, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*dest;

	if (!(s1 && s2))
		return (0);
	dest = NULL;
	i = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest = ft_strcat(s1, s2, dest);
	return (dest);
}
