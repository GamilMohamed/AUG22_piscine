/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:55:59 by mgamil            #+#    #+#             */
/*   Updated: 2022/09/01 01:10:46 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

int	calc(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i + 1 < size)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*motfinal;
	int		total;

	i = 0;
	total = calc(size, strs, sep);
	motfinal = malloc(total + 1);
	if (!motfinal)
		return ((char *)0);
	*motfinal = 0;
	while (i < size)
	{
		ft_strcat(motfinal, strs[i]);
		if (i + 1 < size)
			ft_strcat(motfinal, sep);
		i++;
	}
	return (motfinal);
}
/*
int	main(int argc, char *argv[])
{
	int		taille;
	char	*mots[4] = {argv[1], argv[2], argv[3], argv[4]};
	char	*sep = argv[5];
	printf("%s\n", ft_strjoin(4, mots, sep));
	return (0);
}
*/