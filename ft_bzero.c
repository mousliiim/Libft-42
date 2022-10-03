/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:15:07 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/03 12:47:47 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int main(void)
    {
		char buffer[10] = "Hello!";
		char deux[10] = "Hello!";
			printf("\nDisplay above Bzero : %s\n", buffer);
			bzero(buffer, 0);
			printf("Display after Bzero : %s\n", buffer);
				printf("________________\n\n");
			printf("Display above Ft_Bzero : %s\n", deux);
			ft_bzero(deux, 0);
			printf("Display after Ft_Bzero : %s\n\n", deux);
        return (0);
    }
*/
