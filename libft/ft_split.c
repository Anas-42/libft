/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbobak <aalbobak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:52:26 by aalbobak          #+#    #+#             */
/*   Updated: 2023/01/24 17:31:51 by aalbobak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	num_word(const char *s, char c)
{
	size_t	i;
	size_t	flag;
	size_t	word;

	i = 0;
	flag = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (s[i] != c && flag == 0)
		{
			word++;
			flag = 1;
		}
		i++;
	}
	return (word);
}

int	word_len(const char *s, char c)
{
	size_t	j;

	j = 0;
	while (*s != c && *s)
	{
		s++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		k;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc((num_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*s)
	{
		k = 0;
		while (*s == c && *s)
			s++;
		if (*s)
		{
			tab[j] = malloc(sizeof(**tab) * (word_len(s, c) + 1));
			while (*s != c && *s != '\0' && tab[j])
				tab[j][k++] = *s++;
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}	

// int main(void)
// {
// 	char *str = "anas word      s";
// 	char **p = ft_split(str, ' ');
// 	printf("%s", p);
// }

// int main (void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("anas      anas1 anas2 3   ");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("tab[%d] = %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }