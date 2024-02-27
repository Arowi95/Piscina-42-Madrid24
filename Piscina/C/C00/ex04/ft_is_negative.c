/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:28:04 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/19 12:32:53 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}

/*int main(void)
{
    int number;

	number = -5;
    ft_is_negative(number);
    return 0;
}*/
