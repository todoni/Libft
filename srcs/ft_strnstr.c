/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:17:53 by sohan             #+#    #+#             */
/*   Updated: 2021/05/03 18:52:47 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0 || ft_strlen(haystack) == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = i;
		while (k < len_needle && haystack[j] != '\0' && haystack[j] == needle[k])
		{
			k++;
			j++;
		}
		if (k == len_needle)
			return (haystack + i);
		k = 0;
		i++;
	}
	return (0);
}
