/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:03:36 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/16 12:24:17 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else if (i < len)
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main(void)
// {
// 	char str1[50];
// 	char str2[50] = "anas elbobakcl";
// 	char *ret;

// 	ret = ft_memmove(str1, str2, 6);
// 	printf("%s", ret);
// 	return (0);
// }