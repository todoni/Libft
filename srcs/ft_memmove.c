/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:02:57 by sohan             #+#    #+#             */
/*   Updated: 2021/05/04 19:09:31 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buffer;

	buffer = malloc(len);
	if (buffer == 0)
		return (0);
	buffer = ft_memcpy(buffer, (void*)src, len);
	dst = ft_memcpy(dst, buffer, len);
	return (dst);
}
