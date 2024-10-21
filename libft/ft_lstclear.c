#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int		size;
	t_list	*ptr;

	ptr = *lst;
	size = ft_lstsize(*lst);
	while (size--)
	{
		ptr = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(ptr);
	}
	*lst = NULL;
}
