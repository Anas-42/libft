/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:43:33 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/16 12:38:19 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (unsigned char)c)
	i--;
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}

// int main()
// {
//     char str[]= "alial";
//     char ing = 'a';
//     char *result = ft_strrchr(str, ing);
//     printf("%s", result);
// }