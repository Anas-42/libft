/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:22:58 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/23 14:39:26 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len = 1;
	else if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		i;

	num = n;
	i = nb_len(num);
	res = (char *)malloc(sizeof(char) * (nb_len(num) + 1));
	if (!res)
		return (NULL);
		res [i--] = '\0';
	if (num == 0)
				res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		res[i--] = 48 + (num % 10);
		num /= 10;
	}
	return (res);
}
