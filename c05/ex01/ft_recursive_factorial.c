/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:27:41 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/27 15:54:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
