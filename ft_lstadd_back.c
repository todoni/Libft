/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:44:11 by sohan             #+#    #+#             */
/*   Updated: 2021/05/15 21:35:23 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	start = *lst;
	if (*lst)
	{
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
		*lst = start;
	}
	else
		*lst = new;
}
