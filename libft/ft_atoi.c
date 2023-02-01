/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:59:08 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/18 18:24:20 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		a;
	int		w;
	int		h;

	a = 0;
	w = 1;
	h = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
			a++;
	{
		if (str[a] == '-')
				w = -1;
		if (w == -1 || str[a] == '+')
				a++;
	}
	while (str[a] != '\0' && str[a] >= '0' && str[a] <= '9' )
	{
		h *= 10;
		h += str[a] - '0';
		a++;
	}
	return (h * w);
}

// int main()
// {
// 	char str []= "--469$";
// 	printf("%d",ft_atoi(str));
// }