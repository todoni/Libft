/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 03:28:28 by sohan             #+#    #+#             */
/*   Updated: 2021/04/14 16:06:36 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*append_str(char *origin, const char *str)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = ft_strlen(str);
	if (index == 0)
		return (origin);
	while (i < index)
	{
		origin[i] = str[i];
		i++;
	}
	origin[i] = '\0';
	return (origin);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_joined;
	size_t	len_joined;

	len_joined = ft_strlen(s1) + ft_strlen(s2);
	str_joined = (char *)malloc((len_joined + 1) * sizeof(char));
	if (str_joined == 0)
		return (0);
	str_joined = append_str(str_joined, s1);
	str_joined += ft_strlen(s1);
	str_joined = append_str(str_joined, s2);
	str_joined -= ft_strlen(s1);
	return (str_joined);
}
