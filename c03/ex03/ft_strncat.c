/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:51:44 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/16 11:51:50 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{		
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				l_dest;
	unsigned int	i;

	i = 0;
	l_dest = ft_strlen(dest);
	while (i < nb && src[i])
	{
		dest[l_dest + i] = src [i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (dest);
}
