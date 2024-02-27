/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:17:47 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/27 09:54:41 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 'A' || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
 int ft_str_is_uppercase(char *str);
 char str[] = "zzzzzzzsd";
 {
 ft_str_is_uppercase(str);
 	printf("%d", ft_str_is_uppercase(str));
 }
}*/
