/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:42:19 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/30 22:44:49 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	nbwords(char *str, char *charset)
{
	int	i;
	int	nbmots;

	i = 0;
	nbmots = 0;
	while (str[i])
	{
		while (str[i] && check(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		nbmots++;
		while (str[i] && (!(check(str[i], charset))))
			i++;
	}
	return (nbmots);
}

char	*calcsub(char *str, int start, int end)
{
	char	*var;
	int		i;
	int		total;

	i = 0;
	total = end - start;
	var = malloc(sizeof(char *) * total + 1);
	if (!var)
		return (NULL);
	i = 0;
	while (str[start] && i < total)
		var[i++] = str[start++];
	var[i] = '\0';
	return (var);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		nbw;
	int		start;
	int		nbmots;

	i = 0;
	start = 0;
	nbw = nbwords(str, charset);
	tab = malloc(sizeof(char *) * nbw + 1);
	nbmots = 0;
	while (str[i])
	{
		while (str[i] && check(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		start = i;
		while (str[i] && !(check(str[i], charset)))
			i++;
		tab[nbmots++] = calcsub(str, start, i);
	}
	return (tab);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**tab;

	if (ac == 3)
	{
		tab = ft_split(av[1], av[2]);
		i = -1;
		while (++i < nbwords(av[1], av[2]))
			printf("tab[%i] = %s\n", i, tab[i]);
	}
	return (0);
}
*/