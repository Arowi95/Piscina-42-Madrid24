/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:47:23 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/27 10:03:21 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		if (str[h] < 'a' || str[h] > 'z')
			return (0);
		h++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    char str2[] = "HelloWorld";
    char str3[] = "helloworld"; 
    char str4[] = ""; 
    printf("str1 is lowercase: %d\n", ft_str_is_lowercase(str1)); // Esperado: 1
    printf("str2 is lowercase: %d\n", ft_str_is_lowercase(str2)); // Esperado: 0
    printf("str3 is lowercase: %d\n", ft_str_is_lowercase(str3)); // Esperado: 1
    printf("str4 is lowercase: %d\n", ft_str_is_lowercase(str4)); // Esperado: 1

    return 0;
}*/
