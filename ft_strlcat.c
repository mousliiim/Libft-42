/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:57:15 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/20 05:43:02 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * La fonction concatène les chaîne *dst et *src, et place le résultat dans la 
 * chaîne *dst. Contrairement à la fonction strcat la longueur totale de la 
 * chaîne sera comprise entre la longueur initiale de *dst et size. Le '\0' de
 * fin de chaîne est compatibilisé.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((void *)size == NULL)
	{
		return (0);
	}
	while (dst[i] && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
int main(void)
{
	// Compiler avec Flag -lbsd
	printf("\n ****** TEST FT_STRLCAT ******\n");
	char dst[100] = "1";
    char src[] = "23";
	char dst2[100] = "1";
	char src2[] = "23";
    size_t result = ft_strlcat(dst, src, sizeof(dst));
    printf("Ft_strcat : %s | Retour fonction : %zu\n", dst, result);
	size_t result2 = strlcat(dst2, src2, sizeof(dst2));
	printf("strcat : %s | Retour fonction : %zu\n\n", dst2, result2);
}
*/
