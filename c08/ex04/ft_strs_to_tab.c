/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:17:43 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/31 17:26:55 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char *) * ft_strlen(str) + 1);
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stp;

	i = 0;
	stp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stp)
		return (0);
	while (i < ac)
	{
		stp[i].size = ft_strlen(av[i]);
		stp[i].str = av[i];
		stp[i].copy = ft_strdup(av[i]);
		i++;
	}
	stp[i].str = 0;
	return (stp);
}

/*
   int main(int argc, char  *argv[])
   {
   print(ft_strs_to_tab(argc,argv));
   return 0;
   }
   */
