/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:54:38 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/16 12:35:34 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
		++i;
	}
	if (i != n)
		return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
	return (0);
}

// int main()
// {

// 	int n = 10;
//     char str[]= "anas";
//     char ing []= "anasasa";
//     char *result = ft_strncmp(str, ing);
//     printf("%s", result);
// }