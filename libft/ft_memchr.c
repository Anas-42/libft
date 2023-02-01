/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:40:57 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/16 12:20:43 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const void *ss;
//     int cc;
//     size_t nn;
//     void *pp;
//     ss = "anas";
//     cc = 'n';
//     nn = 4 ;
//     pp = ft_memchr(ss, cc, nn);
//     printf("%s", pp);
// }