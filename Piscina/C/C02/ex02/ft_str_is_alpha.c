/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:32:09 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/27 09:52:37 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
		{
			str++;
		}
		return (1);
	}
}
/*int main(void)
{
    char str1[] = "MELLAMOAROAYTU";
    char str2[] = "Me llamo Aroa y tu";    
	char str3[] = "";
    printf("%d\n", ft_str_is_alpha(str1));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d\n", ft_str_is_alpha(str3));
    return 0;
}*/
