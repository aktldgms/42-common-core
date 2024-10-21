#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*l;
	void	*content;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		content = f(lst->content);
		l = ft_lstnew(content);
		if (!l)
		{
			if (content)
				del(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, l);
		lst = lst->next;
	}
	return (result);
}
