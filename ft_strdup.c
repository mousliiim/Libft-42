/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:50:58 by mmourdal          #+#    #+#             */
/*   Updated: 2022/10/02 18:16:24 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("FT_STRDUP : %s\n", ft_strdup(argv[1]));
		printf("STRDUP : %s\n", strdup(argv[1]));
	}
	else
	printf("Erreur: Il manque un Argument\n");
	return (0);
}
