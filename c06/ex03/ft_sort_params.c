/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:49:30 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/24 14:41:53 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	comp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] || s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	argc--;
	while (i < argc)
	{
		while (comp(argv[i], argv[i + 1]) > comp(argv[i + 1], argv[i]))
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		i++;
	}
	i = 1;
	while (i <= argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
