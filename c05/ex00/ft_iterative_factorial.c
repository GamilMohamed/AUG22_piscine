/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:47:23 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/28 17:56:04 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*
int	ft_atoi(char *str)
{
	int	y;
	int	x;
	int	r;

	y = 0;
	x = 0;
	r = 0;
	while ((str[x] != 127) && (str[x] < 33 && str[x] > 0))
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			y++;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		r = r * 10 + (str[x] - '0');
		x++;
	}
	y %= 2;
	if (y == 1)
		r *= -1;
	return (r);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	cnb;

	cnb = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (++i < cnb)
		nb = nb * i;
	return (nb);
}

// int main(int argc, char  *argv[])
// {
// 	printf("%i\n",ft_iterative_factorial(ft_atoi(argv[1])));
// 	return 0;
// }