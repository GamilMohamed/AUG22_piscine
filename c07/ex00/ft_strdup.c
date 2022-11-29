/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:36 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/30 23:23:40 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(src);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return ((char *)0);
	while (src[++i])
		new[i] = src[i];
	new[i] = '\0';
	return (new);
}
/*
int main(int argc, char *argv[])
{
	printf("ft=%s\n",ft_strdup(argv[1]));
	// printf("vr=%s\n",strdup(argv[1]));
	return (0);
}*/