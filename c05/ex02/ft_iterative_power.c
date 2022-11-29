/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:54:41 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/28 17:59:19 by mgamil           ###   ########.fr       */
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
int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int main(int argc, char *argv[])
{
	int result;

	result = ft_iterative_power(ft_atoi(argv[1]),ft_atoi(argv[2]));
	printf("%i\n",result);
	return (0);
}
*/