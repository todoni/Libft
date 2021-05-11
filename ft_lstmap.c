/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:36:06 by sohan             #+#    #+#             */
/*   Updated: 2021/05/11 23:44:50 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*lst_mapped;

	lst_mapped = lst;
	lst_mapped = ft_lstnew(f(lst->content));
	if (lst_mapped == 0)
	{
		ft_lstclear(&lst_mapped, del);
		return (0);
	}
	lst_mapped->next = lst->next;
	lst_mapped = lst_mapped->next;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_front(&lst_mapped, ft_lstnew(f(lst->content)));
		if (lst_mapped == 0)
		{
			ft_lstclear(&lst_mapped, del);
			return (0);
		}
		lst_mapped->next = lst;
		lst_mapped = lst_mapped->next;
		lst = lst->next;
	}
	return (lst_mapped);
}
