/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:54:15 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/05 02:01:28 by mouss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * DESCRIPTION : La fonction memset() remplit les n premiers octets de la zone
 * mémoire pointée par b avec l'octet c.
 *
 * VALEUR RENVOYEE : La fonction memset() renvoie un pointeur sur la zone
 * mémoire b.
 *
*/

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	len;

	len = n;
	str = s;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (s);
}
