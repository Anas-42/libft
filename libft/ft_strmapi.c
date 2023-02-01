/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:18:26 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/22 18:38:17 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*end;

	a = 0;
	if (!s)
		return (NULL);
	end = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!end)
		return (NULL);
	while (a < ft_strlen(s))
	{
		end[a] = (*f)(a, s[a]);
		a++;
	}
	end[a] = 0;
	return (end);
}
