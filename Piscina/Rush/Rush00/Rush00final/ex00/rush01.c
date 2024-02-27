/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:08:57 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/10 15:43:40 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 0;
	v = 0;
	while (v < y)
	{
		while (h < x)
		{
			if (v == 0 && h == 0)
				ft_putchar('/');
			else if ((h == x -1 && v == 0) || (h == 0 && v == y -1))
				ft_putchar('\\');
			else if (h > 0 && v > 0 && v == y -1 && h == x -1)
				ft_putchar('/');
			else if ((v > 0 && v < y -1) && h > 0 && h > 0 && h < x -1)
				ft_putchar(' ');
			else
				ft_putchar('*');
		h++;
		}
		ft_putchar('\n');
		h = 0;
		v++;
	}
}
