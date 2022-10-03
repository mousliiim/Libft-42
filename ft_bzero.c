/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:15:07 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/03 11:29:05 by mmourdal         ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int main(void)
    {
        char buffer[6] = "Hello!";
	char deux[6] = "Hello!";
	printf("Display above Bzero : %s\n", buffer);
	bzero(buffer, 0);
	printf("Display after Bzero : %s\n", buffer);
	printf("________________\n");
	printf("Display above Ft_Bzero : %s\n", deux);
       	ft_bzero(deux, 0);
        printf("Display after Ft_Bzero : %s\n", deux);
        return EXIT_SUCCESS;
    }
