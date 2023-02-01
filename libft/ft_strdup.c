/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:01:57 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/17 13:22:35 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
			i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
			i++;
	}
	str[i] = 0;
	return (str);
}

// int	main()
// {
// 	char	*a;
// 	char	*b;

// 	a = "ali";
// 	b = ft_strdup(a);
// 	printf("%s", b);
// }
