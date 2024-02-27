/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:45:47 by amateo-g          #+#    #+#             */
/*   Updated: 2024/02/27 09:52:12 by amateo-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *arc, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (arc[i] != '\0' && i < n)
	{
		dest[i] = arc[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
    char arc[] = "Hello, world!";
    char dest[20];    
   	unsigned int n = 9; 
    ft_strncpy(dest, arc, n);
    printf("%s\n", dest);

    return 0;
}*/
