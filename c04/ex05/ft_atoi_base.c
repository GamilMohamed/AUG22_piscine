/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:43:46 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/22 17:48:55 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_checker(char *base, int lenbase);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checker(char *base, int lenbase)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	if (lenbase < 1)
		return (0);
	while (x < lenbase)
	{
		while (base[y])
		{
			if (base[x] == base[y] || base[y] == '+' || base[y] == '-')
				return (0);
			y++;
		}
		x++;
		y = x + 1;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	lbase;
	int	retour;

	lbase = ft_strlen(base);
	retour = ft_checker(base, lbase);
}
