/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:12:38 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/16 22:12:42 by mgamil           ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dst, char *src, unsigned int siz)
{
	char			*pdest;
	char			*psrc;
	unsigned int	size;
	unsigned int	dlen;

	pdest = dst;
	psrc = src;
	size = siz;
	while (size-- != 0 && *pdest != '\0')
		pdest++;
	dlen = pdest - dst;
	size = siz - dlen;
	if (size == 0)
		return (dlen + ft_strlen(psrc));
	while (*psrc != '\0')
	{
		if (size != 1)
		{
			*pdest++ = *psrc;
			size--;
		}
		psrc++;
	}
	*pdest = '\0';
	return (dlen + (psrc - src));
}
