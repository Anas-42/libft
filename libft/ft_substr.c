/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:45:50 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/17 18:15:58 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	z;
	char	*str;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	a = 0;
	z = 0;
	while (s[a])
	{
		if (a >= start && z < len)
		{
			str[z] = s[a];
			z++;
		}
		a++;
	}
	str[z] = '\0';
	return (str);
}
/*
int main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char *strsub;
	printf("%s\n", strsub = ft_substr(str, 0, 10));
}
*/