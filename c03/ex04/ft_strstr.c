/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:22:59 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/16 12:23:01 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	o;
	int	i;
	int	y;

	o = 0;
	y = 0;
	i = 0;
	if (!*to_find)
		return (str);
	if (!*str)
		return (0);
	while (str[i])
	{
		if (str[i] == to_find[o])
		{
			y = i;
			while (to_find[o++] == str[y++])
				if (!to_find[o])
					return (&str[i]);
			o = 0;
		}
		i++;
	}
	return (0);
}
