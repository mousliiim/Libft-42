/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:37:51 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/15 22:07:42 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*str;
	char	*str2;
	char	*ft;

	printf("\n************** FT_STRJOIN *************\n");
	str = "Mouslim";
	str2 = " de 42";
	ft = ft_strjoin(str, str2);
	printf("\nDéclaration pré-requis :\n");
	printf("str = \"Mouslim\"\n");
	printf("str2 = \" de 42\"\n");
	printf("\nTest de la fonction :\n");
	printf("Résultat attendu : Mouslim de 42\n");
	printf("Retour de ft_strjoin : %s\n", ft);
	printf("\n***************************************\n\n");
}*/
