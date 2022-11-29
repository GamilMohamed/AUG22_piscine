/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:29:38 by mgamil            #+#    #+#             */
/*   Updated: 2022/09/01 01:07:33 by mgamil           ###   ########.fr       */
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
int	*ft_range(int min, int max)
{
	int	total;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	total = max - min;
	tab = malloc(sizeof(int) * total);
	if (!tab)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int main(int argc, char *argv[])
{
	int	i;
	i = 0;
	int *stop;
	stop = malloc(sizeof(char) * 1000);
	stop = ft_range(atoi(argv[1]),atoi(argv[2]));
	
	// printf("stop[%i] = %i\n",i,stop[i]);

	// i = atoi(argv[1]);
	// while (i < atoi(argv[2]))
	// {
	// 	printf("stop[%d] = %i\n",i,stop[i]);
	// 	i++;
	// }
	return 0;
}
*/