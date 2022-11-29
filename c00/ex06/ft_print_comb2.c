/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:59:13 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/10 20:59:40 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	casse(int a, int b);
void	ft_putchar(char c);
void	intochar(int h, int i, int j, int k);
void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	intochar(int h, int i, int j, int k)
{
	ft_putchar(h + '0');
	ft_putchar(i + '0');
	ft_putchar(' ');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	if (h != 9 || i != 8)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	casse(int a, int b)
{
	int	xa;
	int	xb;
	int	ya;
	int	yb;

	xa = a / 10;
	ya = a % 10;
	xb = b / 10;
	yb = b % 10;
	intochar(xa, ya, xb, yb);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (a != 98)
	{
		if (b != 99)
		{
			b++;
		}
		else
		{
			a++;
			b = a + 1;
		}
		casse(a, b);
	}
}
