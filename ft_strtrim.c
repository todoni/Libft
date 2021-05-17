/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:14:41 by sohan             #+#    #+#             */
/*   Updated: 2021/05/17 19:15:32 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_location(char const *s1, char const *set)
{
	size_t	location;

	location = 0;
	while (*set)
	{
		if (ft_strncmp(s1, set, 1) == 0)
		{
			location++;
		}
		set++;
	}
	return (location);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	size_t	len;
	char	*result;

	front = 0;
	back = 0;
	len = ft_strlen(s1);
	while ((find_location(s1 + front, set) || \
				find_location(s1 + len - 1 - back, set)) && front + back < len)
	{
		front += find_location(s1 + front, set);
		back += find_location(s1 + len - 1 - back, set);
	}
	result = ft_substr(s1, (unsigned int)front, len - (front + back));
	return (result);
}
