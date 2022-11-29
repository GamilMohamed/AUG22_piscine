/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:29:58 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/29 00:21:37 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int	ft_atoi(char *str)
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
int	ft_sqrt(int nb)
{
	unsigned int	x;
	unsigned int	res;
	unsigned int	cpnb;

	cpnb = (unsigned int)nb;
	x = 1;
	if (nb == 1)
		return (1);
	while (x < cpnb && x <= 46340)
	{
		res = x * x;
		if (res == cpnb)
			return (x);
		x++;
	}
	return (0);
}

/*int main(int argc, char *argv[])
{
	int result;

	result = ft_sqrt(atoi(argv[1]));
	printf("%i\n",result);
	return (0);
}
*/