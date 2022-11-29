/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:09:20 by mgamil            #+#    #+#             */
/*   Updated: 2022/08/14 21:09:22 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + ('a' - 'A');
		x++;
	}
	if (str[0] >= 'a' && str[x] <= 'z')
		str[0] = str[0] - ('a' - 'A');
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	str = ft_strlowcase(str);
	while (str[x])
	{
		if ((str[x] < 'a' && str[x] > 'Z')
			&& ((str[x + 1] >= 'a' && str[x + 1] <= 'z')
				|| (str[x + 1] >= 'A' && str[x + 1] <= 'Z')))
			str[x + 1] = str[x + 1] - ('a' - 'A');
		else if ((str[x] < 'A' && str[x] > '9')
			&& ((str[x + 1] >= 'a' && str[x + 1] <= 'z')
				|| (str[x + 1] >= 'A' && str[x + 1] <= 'Z')))
			str[x + 1] = str[x + 1] - ('a' - 'A');
		else if ((str[x] < '0') && ((str[x + 1] >= 'a' && str[x + 1] <= 'z')
				|| (str[x + 1] >= 'A' && str[x + 1] <= 'Z')))
			str[x + 1] = str[x + 1] - ('a' - 'A');
		else if ((str[x] > 'z')
			&& ((str[x + 1] >= 'a' && str[x + 1] <= 'z')
				|| (str[x + 1] >= 'A' && str[x + 1] <= 'Z')))
			str[x + 1] = str[x + 1] - ('a' - 'A');
		x++;
	}
	return (str);
}
