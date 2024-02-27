/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:03:12 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/23 13:04:02 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int a = 8;
	int b = 2;
	int div = 2000;
	int *div = &div;
	int *mod &mod;
	ft_div_mod( a, b, *div, *mod);
	return (0);
}*/
