#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *new;
	t_list *lst_tmp;

	lst_tmp = *lst;
	while (lst_tmp)
	{
		new = lst_tmp;
		lst_tmp = lst_tmp->next;
		del(new->content);
		free(new);
	}
	*lst = NULL;
}
