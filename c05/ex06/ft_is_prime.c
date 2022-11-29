/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:39:01 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/28 17:54:54 by mgamil           ###   ########.fr       */
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
int	ft_is_prime(int nb)
{
	int	x;

	if (nb == 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb < 2)
		return (0);
	x = 3;
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
int main(int argc, char *argv[])
{
	int result;

	result = ft_is_prime(ft_atoi(argv[1]));
	printf("%i\n",result);
	return (0);
}
*/