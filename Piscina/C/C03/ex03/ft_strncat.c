/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:54:49 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/26 20:25:08 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	a;
	unsigned	int	b;

	a = 0;
	b = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[(a + b)] = '\0';
	return (dest);
}
