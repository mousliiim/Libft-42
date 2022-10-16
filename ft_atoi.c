/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:25:23 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/16 04:20:04 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * Transforme une chaine de caractere donnée en Parametre
 * en entier
*/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("\n************** FT_ATOI *************\n");
	printf("\n'42' : %d\n", ft_atoi("42"));
	printf("'-42' : %d\n", ft_atoi("-42"));
	printf("'   +4210' : %d\n", ft_atoi("   +4210"));
	printf("'   +-+4210' : %d\n", ft_atoi("   +-+4210"));
	printf("'m   +-+4210' : %d\n", ft_atoi("m   +-+4210"));
	printf("'   42m10' : %d\n", ft_atoi("   42m10"));
	printf("'m' : %d\n", ft_atoi("m"));
	printf("\n*************** ATOI ***************\n");
	printf("\n'42' : %d\n", atoi("42"));
	printf("'-42' : %d\n", atoi("-42"));
	printf("'   +4210' : %d\n", atoi("   +4210"));
	printf("'   +-+4210' : %d\n", atoi("   +-+4210"));
	printf("'m   +-+4210' : %d\n", atoi("m   +-+4210"));
	printf("'   42m10' : %d\n", atoi("   42m10"));
	printf("'m' : %d\n", atoi("m"));
	printf("\n************************************\n\n");
}
