/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:47:53 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/10 22:48:07 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
int		combienp(int i);
int		isnegative(int x);
int		longueur(int nb);
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	combienp(int i)
{
	int	r;
	int	puissance;

	r = 1;
	puissance = 1;
	while (r < i)
	{
		puissance = puissance * 10;
		r++;
	}
	return (puissance);
}

int	isnegative(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	return (nb);
}

int	longueur(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb %= 10;
		nb /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	puissance;
	int	nbcopy;
	int	valeur;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	i = longueur(nb);
	nb = isnegative(nb);
	nbcopy = nb;
	puissance = combienp(i);
	isnegative(nb);
	while (puissance != 0)
	{
		valeur = nbcopy / puissance;
		nbcopy = nbcopy % puissance;
		puissance = puissance / 10;
		ft_putchar(valeur + '0');
	}
}
