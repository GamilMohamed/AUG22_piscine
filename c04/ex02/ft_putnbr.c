/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:30:10 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/22 17:41:22 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	x;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	x = (unsigned int)nb;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		x = x % 10;
	}
	ft_putchar(x + '0');
}
