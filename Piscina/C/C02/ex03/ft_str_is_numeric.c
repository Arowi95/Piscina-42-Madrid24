/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:08:28 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/27 10:00:10 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "1234567890";
    char str2[] = "1234a67890";
    char str3[] = "";

    printf("str1 is numeric: %d\n", ft_str_is_numeric(str1));
    printf("str2 is numeric: %d\n", ft_str_is_numeric(str2));
    printf("str3 is numeric: %d\n", ft_str_is_numeric(str3));

    return 0;
}*/
