/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:47:59 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/16 13:15:07 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
			i++;
	}
	return (0);
}

// int main()
// {
//     const void *ss;
//     const void *cc;
//     size_t nn;
//     void *pp;
//     ss = "anas";
//     cc = "anass";
//     nn = 10 ;
//     pp = ft_memchr(ss, cc, nn);
//     printf("%s", pp);
// }