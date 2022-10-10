/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:27:34 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/10 04:40:19 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	if (*little == 0 || big == little)
	{
		return ((char *)big);
	}
	if (len == 0)
	{
		return ((char *)big);
	}
	len_little = ft_strlen(little);
	while (*big && len_little <= len--)
	{
		if (!(ft_strncmp((char *)big, (char *)little, len_little)))
		{
			return ((char *)big);
		}
		big++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	bigarray[20] = "TestMouslim";
	const char	littlearray[10] = "Mo";
	char		*result;

	result = ft_strnstr(bigarray, littlearray, 6);
	printf("\nChaine sur laquelle ont recherche : %s\n", bigarray);
	printf("Premiere occurence rechercher : %s\n", littlearray);
	printf("La sous chaine rechercher est : %s\n\n", result);
	return (0);
}
*/
