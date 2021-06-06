#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*new;

	new = lst->next;
	del(lst->content);
	free(lst);
}
