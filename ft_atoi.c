/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:25:23 by mmourdal          #+#    #+#             */
/*   Updated: 2022/09/25 20:25:23 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(char *str)
{
	int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    if(!str)
    {
        return (0);
    }
    while(str[i] <= 32)
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sign = -1;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i++] - '0';
    }
    result *= sign;
    return (result);
}