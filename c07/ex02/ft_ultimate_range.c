/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:56:52 by mgamil            #+#    #+#             */
/*   Updated: 2022/09/01 01:07:00 by mgamil           ###   ########.fr       */
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
int	ft_ultimate_range(int **range, int min, int max)
{
	int	total;
	int	i;

	total = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * total);
	if (!range)
		return (-1);
	i = -1;
	while (++i < total)
		(*range)[i] = min++;
	return (total);
}
/*
int main(int argc, char *argv[])
{
	// ft_ultimate_range(ft_atoi(argv[1]),ft_atoi(argv[2]),ft_atoi(argv[3]));
	int a;
	int *b;

	a = ft_ultimate_range(&b,4,7);
	printf("%i\n",a);
	return 0;
}
*/