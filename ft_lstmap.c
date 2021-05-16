/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:36:06 by sohan             #+#    #+#             */
/*   Updated: 2021/05/16 15:39:34 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*lst_mapped;
	t_list	*temp;

	lst_mapped = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == 0)
		{
			ft_lstclear(&lst_mapped, del);
			return (lst_mapped);
		}
		ft_lstadd_back(&lst_mapped, temp);
		lst = lst->next;
	}
	return (lst_mapped);
}
