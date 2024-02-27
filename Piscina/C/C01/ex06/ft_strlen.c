/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:27:33 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/21 12:14:31 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
    char *str = "Hola Mundo";
    write(1, str,10);
    return 0;
}*/
