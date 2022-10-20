/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:41:45 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/20 06:02:32 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * La fonction substr renvoie une sous-chaîne indiqué d'une chaîne de caractères.
 * Premier Parametre : Chaine à partir de laquelle extraire la sous-chaîne.
 * Deuxieme Parametre : Position de départ des caractères de la sous-chaîne.
 * Troisieme Parametre : Nombre de caractères dans la sous-chaîne.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			s_size;
	char			*str;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	else if (start >= s_size)
	{
		start = s_size;
		len = 0;
	}
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	*str;
	char	*ft;

	printf("\n************** FT_SUBSTR *************\n");
	str = "Mouslim de 42";
	ft = ft_substr(str, 11, 2);
	printf("Test de la fonction :\n");
	printf("ft_substr(\"Mouslim de 42\", 11, 2) : %s\n", ft);
	printf("**************************************\n\n");
}
*/
