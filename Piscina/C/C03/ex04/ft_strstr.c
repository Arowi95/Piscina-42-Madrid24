/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:21:32 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/26 20:30:06 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	if (to find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str [a + b] == to_find[b] && to_find[b] != '\0')
		{
			a++;
		}
		if (to_find[b] == '\0')
			return (str + a);
		b++;
	}
	return (0);
}
