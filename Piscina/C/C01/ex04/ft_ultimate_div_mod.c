/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:34:46 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/22 12:46:06 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tem;

	tem = *a;
	*a = tem / *b;
	*b = tem % *b;
}
/* int main()
{
	int *a = 12;
	int *b = 6;
	printf("%d, a");
	printf("%d, b");
	return 0;
}*/
